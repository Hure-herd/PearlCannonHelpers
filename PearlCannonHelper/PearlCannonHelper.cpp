#include "PearlCannonHelper.h"
#include "Pearl.h"
#include "StringHelper.h"
#include "Constant.h"
#include <QFileDialog>
#include <QClipboard>
#include <QMessageBox>
#include <QTranslator>
#include <QSettings>
#include <QDebug>
#include <cmath>
#include <algorithm>
#include <algorithm>
using namespace std;


const double pi = acos(-1);

PearlCannonHelper::PearlCannonHelper(QWidget *parent): QMainWindow(parent)
{
	flag_initializing = true;
	ui.setupUi(this);

	// 珍珠状态
	ui.posXLineEdit->setValidator(new QRegularExpressionValidator(QRegularExpression(StringHelper::expRealNumber), this));
	ui.posYLineEdit->setValidator(new QRegularExpressionValidator(QRegularExpression(StringHelper::expRealNumber), this));
	ui.posZLineEdit->setValidator(new QRegularExpressionValidator(QRegularExpression(StringHelper::expRealNumber), this));
	ui.motionXLineEdit->setValidator(new QRegularExpressionValidator(QRegularExpression(StringHelper::expRealNumber), this));
	ui.motionYLineEdit->setValidator(new QRegularExpressionValidator(QRegularExpression(StringHelper::expRealNumber), this));
	ui.motionZLineEdit->setValidator(new QRegularExpressionValidator(QRegularExpression(StringHelper::expRealNumber), this));

	// 输出条件
	ui.groundYLineEdit->setValidator(new QRegularExpressionValidator(QRegularExpression(StringHelper::expRealNumber), this));
	ui.maxTickLineEdit->setValidator(new QRegularExpressionValidator(QRegularExpression(StringHelper::expIntNumber), this));

	// 珍珠炮信息
	ui.pearlXLineEdit->setValidator(new QRegularExpressionValidator(QRegularExpression(StringHelper::expRealNumber), this));
	ui.pearlZLineEdit->setValidator(new QRegularExpressionValidator(QRegularExpression(StringHelper::expRealNumber), this));
	ui.PlayerYLineEdit->setValidator(new QRegularExpressionValidator(QRegularExpression(StringHelper::expRealNumber), this));
	ui.pearlYMotionEdit->setValidator(new QRegularExpressionValidator(QRegularExpression(StringHelper::expRealNumber), this));


	// 配置生成
	ui.groundYLineEdit_2->setValidator(new QRegularExpressionValidator(QRegularExpression(StringHelper::expRealNumber), this));
	ui.maxTickLineEdit_2->setValidator(new QRegularExpressionValidator(QRegularExpression(StringHelper::expIntNumber), this));

	ui.tabWidget->setTabPosition(QTabWidget::South);
	ui.traceTableWidget->verticalHeader()->setDefaultAlignment(Qt::AlignCenter);
	// 内容自适应 + 剩余空间均分：内容少时填满表格，内容多时可横向滚动完整显示
	ui.traceTableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Interactive);
	ui.traceTableWidget->horizontalHeader()->setStretchLastSection(false);
	ui.settingTableWidget->verticalHeader()->setDefaultAlignment(Qt::AlignCenter);
	// 内容自适应 + 剩余空间均分：内容少时填满表格，内容多时可横向滚动完整显示
	ui.settingTableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Interactive);
	ui.settingTableWidget->horizontalHeader()->setStretchLastSection(false);

	// 初始化四组 TNT 动量（默认与旧输入一致）
	{
		double tx = 0.6025678955;
		double ty = 0.0;
		double tz = 0.6025678955;
		for (int g = 0; g < 4; g++) m_thrusts[g] = vec3d(tx, ty, tz);
	}

	// TNT给予动量组框内加"设置..."按钮
	{
		QPushButton *btn = new QPushButton(QStringLiteral("设置..."), ui.motionGroupBox_2);
		btn->setObjectName(QStringLiteral("thrustButton"));
		QGridLayout *lay = qobject_cast<QGridLayout *>(ui.motionGroupBox_2->layout());
		if (lay) lay->addWidget(btn, 3, 0, 1, 2);
		connect(btn, &QPushButton::clicked, this, &PearlCannonHelper::on_thrustButton_clicked);
	}

	loadSetting();
	on_languageComboBox_activated(1);

	connect(ui.groundYLineEdit, SIGNAL(textEdited(QString)), ui.groundYLineEdit_2, SLOT(setText(QString)));
	connect(ui.groundYLineEdit_2, SIGNAL(textEdited(QString)), ui.groundYLineEdit, SLOT(setText(QString)));
	connect(ui.groundYLineEdit, SIGNAL(textChanged(QString)), this, SLOT(updatePearlInfo()));
	connect(ui.maxTickLineEdit, SIGNAL(textEdited(QString)), ui.maxTickLineEdit_2, SLOT(setText(QString)));
	connect(ui.maxTickLineEdit_2, SIGNAL(textEdited(QString)), ui.maxTickLineEdit, SLOT(setText(QString)));

	connect(ui.displayMomentumCheckBox, SIGNAL(stateChanged(int)), this, SLOT(generateTrace()));
	connect(ui.posXLineEdit, SIGNAL(textEdited(QString)), this, SLOT(generateTrace()));
	connect(ui.posYLineEdit, SIGNAL(textEdited(QString)), this, SLOT(generateTrace()));
	connect(ui.posZLineEdit, SIGNAL(textEdited(QString)), this, SLOT(generateTrace()));
	connect(ui.motionXLineEdit, SIGNAL(textEdited(QString)), this, SLOT(generateTrace()));
	connect(ui.motionYLineEdit, SIGNAL(textEdited(QString)), this, SLOT(generateTrace()));
	connect(ui.motionZLineEdit, SIGNAL(textEdited(QString)), this, SLOT(generateTrace()));

	connect(ui.isStartFromExplosionCheckBox, SIGNAL(stateChanged(int)), this, SLOT(updatePearlInfo()));
	connect(ui.directionComboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(updateSetting()));
	connect(ui.amoutSpinBox1, SIGNAL(valueChanged(int)), this, SLOT(updateSetting()));
	connect(ui.amoutSpinBox2, SIGNAL(valueChanged(int)), this, SLOT(updateSetting()));

	connect(ui.pearlXLineEdit, SIGNAL(textEdited(QString)), this, SLOT(updatePearlInfo()));
	connect(ui.pearlZLineEdit, SIGNAL(textEdited(QString)), this, SLOT(updatePearlInfo()));
	connect(ui.PlayerYLineEdit, SIGNAL(textEdited(QString)), this, SLOT(updatePearlInfo()));
	connect(ui.pearlYMotionEdit, SIGNAL(textEdited(QString)), this, SLOT(updatePearlInfo()));


	connect(ui.settingTableWidget->horizontalHeader(), SIGNAL(sectionClicked(int)), this, SLOT(sortSettingTable(int)));


	flag_initializing = false;
	updateAll();
}

QString getChunkString(vec3d pos)
{
	int x = int(floor(pos.x / 16));
	int z = int(floor(pos.z / 16));
	return QString("[%1, %2]").arg(x).arg(z);
}

QString directionToString(int d) {
	switch (d) {
	case 0: return "S";
	case 1: return "W";
	case 2: return "E";
	case 3: return "N";
	default: return "None";
	}
}

void PearlCannonHelper::generateTrace()
{
	if (flag_initializing) return;
	double _x = ui.posXLineEdit->text().toDouble();
	double _y = ui.posYLineEdit->text().toDouble();
	double _z = ui.posZLineEdit->text().toDouble();
	double _mx = ui.motionXLineEdit->text().toDouble();
	double _my = ui.motionYLineEdit->text().toDouble();
	double _mz = ui.motionZLineEdit->text().toDouble();
	Pearl pearl(vec3d(_x, _y, _z), vec3d(_mx, _my, _mz));
	double groundY = ui.groundYLineEdit->text().toDouble();
	double maxTick = ui.maxTickLineEdit->text().toInt();

	bool displayMomentum = ui.displayMomentumCheckBox->isChecked();
	const int ColumnCount = 3 - (!displayMomentum);
	ui.traceTableWidget->setRowCount(0);
	ui.traceTableWidget->setColumnCount(ColumnCount);

	QStringList column;
	column << tr("Chunk") << tr("Position") << tr("Momentum");
	ui.traceTableWidget->setHorizontalHeaderLabels(column);
	for (int i = 0; i < maxTick && pearl.getY() >= groundY; i++)
	{
		ui.traceTableWidget->insertRow(ui.traceTableWidget->rowCount());
		ui.traceTableWidget->setItem(i, 0, new QTableWidgetItem(getChunkString(pearl.getPosition())));
		ui.traceTableWidget->setItem(i, 1, new QTableWidgetItem(pearl.getPosition().toString()));
		bool isVersion1212Plus = (ui.directionComboBox_2->currentText() == "1.21.2+");
		if (displayMomentum) ui.traceTableWidget->setItem(i, 2, new QTableWidgetItem(pearl.getMomentum().toString()));
		for (int j = 0; j < ColumnCount; j++) ui.traceTableWidget->item(i, j)->setTextAlignment(Qt::AlignCenter);
		if (isVersion1212Plus) {
			pearl.tick2();
		}
		else {
			pearl.tick();
		}
	}
	fitTableColumns(ui.traceTableWidget);
}

Pearl PearlCannonHelper::getPearl()
{
	double x = ui.pearlXLineEdit->text().toDouble();
	double y = ui.PlayerYLineEdit->text().toDouble();
	double z = ui.pearlZLineEdit->text().toDouble();

	double my = ui.pearlYMotionEdit->text().toDouble();

	return Pearl(vec3d(x, y, z), vec3d(0, my, 0));
}

void PearlCannonHelper::loadSetting()
{
	QSettings settings(Constant::iniFileName, QSettings::IniFormat);
	ui.pearlXLineEdit->setText(settings.value("pearlX", ui.pearlXLineEdit->text()).toString());
	ui.pearlZLineEdit->setText(settings.value("pearlZ", ui.pearlZLineEdit->text()).toString());
	ui.PlayerYLineEdit->setText(settings.value("pearlY", ui.PlayerYLineEdit->text()).toString());
	ui.pearlYMotionEdit->setText(settings.value("YMotion", ui.pearlYMotionEdit->text()).toString());
	ui.maxTNTSpinBox->setValue(settings.value("maxTNT", ui.maxTNTSpinBox->value()).toInt());
	QString groundY = settings.value("groundY", ui.groundYLineEdit->text()).toString();
	ui.groundYLineEdit->setText(groundY);
	ui.groundYLineEdit_2->setText(groundY);
	ui.maxTickLineEdit->setText(settings.value("maxTickTime", ui.maxTickLineEdit->text()).toString());
	const char *grp[4] = { "NW", "NE", "SW", "SE" };
	for (int g = 0; g < 4; g++)
	{
		m_thrusts[g].x = settings.value(QString("TNT_%1_X").arg(grp[g]), m_thrusts[g].x).toDouble();
		m_thrusts[g].y = settings.value(QString("TNT_%1_Y").arg(grp[g]), m_thrusts[g].y).toDouble();
		m_thrusts[g].z = settings.value(QString("TNT_%1_Z").arg(grp[g]), m_thrusts[g].z).toDouble();
	}
}

void PearlCannonHelper::saveSetting()
{
	QSettings settings(Constant::iniFileName, QSettings::IniFormat);
	settings.setValue("pearlX", ui.pearlXLineEdit->text());
	settings.setValue("pearlZ", ui.pearlZLineEdit->text());
	settings.setValue("pearlY", ui.PlayerYLineEdit->text());;
	settings.setValue("YMotion", ui.pearlYMotionEdit->text());;
	settings.setValue("maxTNT", ui.maxTNTSpinBox->value());
	settings.setValue("groundY", ui.groundYLineEdit->text());
	settings.setValue("maxTickTime", ui.maxTickLineEdit->text());
	const char *grp[4] = { "NW", "NE", "SW", "SE" };
	for (int g = 0; g < 4; g++)
	{
		settings.setValue(QString("TNT_%1_X").arg(grp[g]), m_thrusts[g].x);
		settings.setValue(QString("TNT_%1_Y").arg(grp[g]), m_thrusts[g].y);
		settings.setValue(QString("TNT_%1_Z").arg(grp[g]), m_thrusts[g].z);
	}
}

void PearlCannonHelper::on_thrustButton_clicked()
{
	ThrustDialog dlg(m_thrusts, this);
	if (dlg.exec() == QDialog::Accepted)
	{
		dlg.getValues(m_thrusts);
		saveSetting();
	}
}

void PearlCannonHelper::updatePearlInfo()
{
	// 轨迹模拟：按当前方向 d 选对应的两组 TNT（与搜索逻辑一致）
	// 目标方向 S/W/E/N → 用目标反侧的两组 TNT
	// S: NW(0)+NE(1)；W: NE(1)+SE(3)；E: NW(0)+SW(2)；N: SW(2)+SE(3)
	const int mapL[4] = { 0, 1, 0, 2 };
	const int mapR[4] = { 1, 3, 2, 3 };
	int d = setting.direction;
	if (d < 0 || d > 3) d = 0;
	vec3d thrustL = m_thrusts[mapL[d]];
	vec3d thrustR = m_thrusts[mapR[d]];

	if (flag_initializing) return;
	Pearl pearl = getPearl();
	pearl.accelerate(setting.getThrustFromVec2(thrustL, thrustR));
	bool isVersion1212Plus = (ui.directionComboBox_2->currentText() == "1.21.2+");
	if (!ui.isStartFromExplosionCheckBox->isChecked())
	{
		if (isVersion1212Plus) {
			pearl.tick2();
		}
		else {
			pearl.tick();
		}
	}

	ui.posXLineEdit->setText(QString::number(pearl.getX(), 'f'));
	ui.posYLineEdit->setText(QString::number(pearl.getY(), 'f'));
	ui.posZLineEdit->setText(QString::number(pearl.getZ(), 'f'));
	ui.motionXLineEdit->setText(QString::number(pearl.getMx(), 'f'));
	ui.motionYLineEdit->setText(QString::number(pearl.getMy(), 'f'));
	ui.motionZLineEdit->setText(QString::number(pearl.getMz(), 'f'));

	Setting t_setting = setting;
	ui.directionComboBox->setCurrentIndex(t_setting.direction);
	ui.amoutSpinBox1->setValue(t_setting.amount_l);
	ui.amoutSpinBox2->setValue(t_setting.amount_r);

	generateTrace();
	saveSetting();
}

void PearlCannonHelper::updateSetting()
{
	if (flag_initializing) return;
	setting.amount_l = ui.amoutSpinBox1->value();
	setting.amount_r = ui.amoutSpinBox2->value();
	setting.direction = ui.directionComboBox->currentIndex();
	updatePearlInfo();
}

void PearlCannonHelper::updateAll()
{
	if (flag_initializing) return;
	on_genPushButton_clicked();
	updatePearlInfo();
}

void PearlCannonHelper::tryLoadBitSeq(QString text)
{
	try
	{
		setting = Setting(text);
		updatePearlInfo();
	}
	catch (...)
	{
		return;
	}
}

void PearlCannonHelper::on_copyBitPushButton_clicked()
{
	QApplication::clipboard()->setText(setting.toString());
}
void PearlCannonHelper::on_pasteBitPushButton_clicked()
{
	QString text = QApplication::clipboard()->text();
	tryLoadBitSeq(text);
}
void PearlCannonHelper::fitTableColumns(QTableWidget *tb)
{
	// 内容自适应后，若总宽小于表格宽度，把剩余空间平均分给各列（填满）
	int cols = tb->columnCount();
	if (cols <= 0) return;
	tb->resizeColumnsToContents();
	int totalW = 0;
	for (int j = 0; j < cols; j++) totalW += tb->columnWidth(j);
	int viewW = tb->viewport()->width();
	if (totalW < viewW)
	{
		int extra = (viewW - totalW) / cols;
		for (int j = 0; j < cols; j++)
			tb->setColumnWidth(j, tb->columnWidth(j) + extra);
	}
	// 内容超宽时不拉伸，出现横向滚动条可完整滑动
}

void PearlCannonHelper::updateResult()
{
	QStringList column;
	column << tr("Distance") << tr("Position") << tr("Tick") << tr("Direct") << tr("Light") << tr("Dark") << tr("All TNT");
	int ColumnCount = column.length();
	ui.settingTableWidget->setRowCount(0);
	ui.settingTableWidget->setColumnCount(ColumnCount);
	ui.settingTableWidget->setHorizontalHeaderLabels(column);
	for (int i = 0; i < result.size(); i++)
	{
		ui.settingTableWidget->insertRow(ui.settingTableWidget->rowCount());
		ui.settingTableWidget->setItem(i, 0, new QTableWidgetItem(QString::number(result[i].dis, 'f', 4)));
		ui.settingTableWidget->setItem(i, 1, new QTableWidgetItem(result[i].pos.toString()));
		ui.settingTableWidget->setItem(i, 2, new QTableWidgetItem(QString::number(result[i].tick)));

		ui.settingTableWidget->setItem(i, 3, new QTableWidgetItem(result[i].direction));

		ui.settingTableWidget->setItem(i, 4, new QTableWidgetItem(QString::number(result[i].setting.amount_l)));
		ui.settingTableWidget->setItem(i, 5, new QTableWidgetItem(QString::number(result[i].setting.amount_r)));
		ui.settingTableWidget->setItem(i, 6, new QTableWidgetItem(QString::number(result[i].setting.amount_l + result[i].setting.amount_r)));

		for (int j = 0; j < ColumnCount; j++)
			ui.settingTableWidget->item(i, j)->setTextAlignment(Qt::AlignCenter);
	}
	fitTableColumns(ui.settingTableWidget);
}

bool cmpDistance(const SortingData &a, const SortingData &b)
{
	return a.dis < b.dis;
}
bool cmpTick(const SortingData &a, const SortingData &b)
{
	return a.tick < b.tick;
}
bool cmpLightGray(const SortingData &a, const SortingData &b)
{
	return a.setting.amount_l < b.setting.amount_l;
}
bool cmpDarkGray(const SortingData &a, const SortingData &b)
{
	return a.setting.amount_r < b.setting.amount_r;
}
bool cmpTNT(const SortingData &a, const SortingData &b)
{
	return a.setting.amount_l + a.setting.amount_r < b.setting.amount_l + b.setting.amount_r;
}
bool intersect(double a1, double a2, double b1, double b2)
{
	return max(a1, b1) < min(a2, b2);
}
bool inRange(int direction, double angle, double delta, const vec3d &tL, const vec3d &tR)
{
	// 方向 d 的推力 = i·tL + j·tR，角度范围由两个极端 (i=0,j=1) 和 (i=1,j=0) 决定
	double a1 = Setting(0, 1, direction, 0).getThrustFromVec2(tL, tR).angle();
	double a2 = Setting(1, 0, direction, 0).getThrustFromVec2(tL, tR).angle();
	if (a2 < a1) swap(a1, a2);
	if (abs(a2 - a1) > pi)
	{
		a1 += 2 * pi;
		swap(a1, a2);
	}
	double b1 = angle - delta;
	double b2 = angle + delta;
	return intersect(a1, a2, b1, b2) || intersect(a1 + 2 * pi, a2 + 2 * pi, b1, b2) || intersect(a1, a2, b1 + 2 * pi, b2 + 2 * pi);
}
void PearlCannonHelper::on_genPushButton_clicked()
{
	double dstPosX = ui.dstXLineEdit->text().toDouble();
	double dstPosZ = ui.dstZLineEdit->text().toDouble();
	int maxTNT = ui.maxTNTSpinBox->value();
	int maxTick = ui.maxTickLineEdit_2->text().toInt();
	double groundY = ui.groundYLineEdit_2->text().toInt();

	// 角度粗筛用的代表动量（四组的西北+东北平均，仅用于 inRange 判断方向可达性）
	vec3d baseThrust = (m_thrusts[0] + m_thrusts[1]) * 0.5;

	Pearl pearl0 = getPearl();
	vec3d vec = vec3d(dstPosX, pearl0.getY(), dstPosZ) - pearl0.getPosition();
	double angle = vec.angle();
	double delta = 10.0 / maxTNT;
	// 角度窗口下限保护：maxTNT 很大时 10/maxTNT 会窄到 0.0000x rad，
	// 远小于整数网格的角度分辨率，导致射程匹配的组合被漏搜。
	if (delta < 0.005) delta = 0.005;
	double a1 = angle - delta;
	double a2 = angle + delta;
	QVector<SortingData> srt;
	int cnt = 0;
	// 预计算 0.99^t 查表（pow 太慢，查表 O(1)）
	const double R = 0.99;
	QVector<double> rpow(maxTick + 1);
	rpow[0] = 1.0;
	for (int t = 1; t <= maxTick; t++) rpow[t] = rpow[t - 1] * R;
	const double SR = 100.0; // 1/(1-R)
	const double lnR = log(R);

	// 目标水平距离
	double D_target = sqrt((dstPosX - pearl0.getX()) * (dstPosX - pearl0.getX()) + (dstPosZ - pearl0.getZ()) * (dstPosZ - pearl0.getZ()));
	// 落地 tick（用近似 mvy，忽略推力 Y 分量影响）
	double mvyA = pearl0.getMy();
	double CA0 = 300.0, gA0 = 3.0;
	if (ui.directionComboBox_2->currentText() == "1.21.2+") { CA0 = 297.0; gA0 = 2.97; }
	double YCA = SR * mvyA + CA0;
	auto yAtA = [&](int t) -> double { return pearl0.getY() + YCA * (1 - rpow[t]) - gA0 * t; };
	int T_land = maxTick;
	if (yAtA(maxTick) < groundY)
	{
		int lo = 1, hi = maxTick;
		while (lo < hi) { int mid = (lo + hi) >> 1; if (yAtA(mid) < groundY) hi = mid; else lo = mid + 1; }
		T_land = lo - 1;
		if (T_land < 1) T_land = 1;
	}
	double K = (1.0 - rpow[T_land]) / (1.0 - R); // 落地前水平位移系数（约 26）
	double eps = max(100.0, D_target * 0.002);
	// 射程窗口：|V| ∈ [D/K, D+eps]（tick=T_land 命中 ~ tick=1 命中）
	double Rlo = D_target / K, Rhi = D_target + eps;
	double Rlo2 = Rlo * Rlo, Rhi2 = Rhi * Rhi;

	for (int d = 0; d < 4; d++)
	{
		// 方向 d 对应的两组 TNT：浅色位置 + 深色位置（0=西北,1=东北,2=西南,3=东南）
		// 目标方向 S/W/E/N → 用目标反侧的两组 TNT
		// S: NW(0)+NE(1)；W: NE(1)+SE(3)；E: NW(0)+SW(2)；N: SW(2)+SE(3)
		const int mapL[4] = { 0, 1, 0, 2 };
		const int mapR[4] = { 1, 3, 2, 3 };
		vec3d thrustL = m_thrusts[mapL[d]];
		vec3d thrustR = m_thrusts[mapR[d]];

		if (!inRange(d, angle, delta, thrustL, thrustR)) continue;
		bool isVersion1212Plus = (ui.directionComboBox_2->currentText() == "1.21.2+");
		qDebug() << "Searching in direction " << d;

		// 推力 = i*u + j*v，u=浅色组完整推力向量, v=深色组完整推力向量
		// （用户填的向量已带方向符号，不再乘 sign 表）
		vec3d u = thrustL;
		vec3d v = thrustR;

		// tryPair：角度校验 + 下界剪枝 + 解析模拟 + top-100 插入
		auto tryPair = [&](int i, int j) {
			int p = 0;
			Setting s = Setting(i, j, d, p);
			cnt++;
			vec3d thrust = s.getThrustFromVec2(thrustL, thrustR);
			double a = thrust.angle();
			if (!(a1 < a && a < a2 || a1 < a + 2 * pi && a + 2 * pi < a2 || a1 < a - 2 * pi && a - 2 * pi < a2))
				return;
			// 下界剪枝：目标到射程线段 [P0, P0+100V] 的最短距离 > 当前第100名 → 跳过
			if (srt.size() >= 100)
			{
				double px0 = pearl0.getX(), pz0 = pearl0.getZ();
				double vx = thrust.x * 100, vz = thrust.z * 100;
				double dx = dstPosX - px0, dz = dstPosZ - pz0;
				double L2 = vx * vx + vz * vz;
				if (L2 > 1e-30)
				{
					double tt = (dx * vx + dz * vz) / L2;
					if (tt < 0) tt = 0; else if (tt > 1) tt = 1;
					double lx = dstPosX - (px0 + tt * vx);
					double lz = dstPosZ - (pz0 + tt * vz);
					double lb = sqrt(lx * lx + lz * lz);
					if (lb > srt.back().dis) return;
				}
			}
			// ===== 解析模拟 =====
			double px0 = pearl0.getX(), py0 = pearl0.getY(), pz0 = pearl0.getZ();
			double mvx = pearl0.getMx() + thrust.x;
			double mvy = pearl0.getMy() + thrust.y;
			double mvz = pearl0.getMz() + thrust.z;
			double C = 300.0, g = 3.0;
			if (isVersion1212Plus) { C = 297.0; g = 2.97; }
			// 落地 tick T（y(T) >= groundY 的最大 tick）
			int T = maxTick;
			{
				double YC = SR * mvy + C;
				auto yAtI = [&](int t) -> double { return py0 + YC * (1 - rpow[t]) - g * t; };
				if (yAtI(maxTick) < groundY)
				{
					int lo = 1, hi = maxTick;
					while (lo < hi)
					{
						int mid = (lo + hi) >> 1;
						if (yAtI(mid) < groundY) hi = mid; else lo = mid + 1;
					}
					T = lo - 1;
					if (T < 1) return; // 首 tick 即落地
				}
			}
			// 射程线段端点 P_end = P0 + V*SR
			double ex = px0 + mvx * SR, ez = pz0 + mvz * SR;
			double dx = ex - px0, dz = ez - pz0;
			double L2 = dx * dx + dz * dz;
			double mn = 1e10;
			SortingData best = SortingData{mn, pearl0.getPosition(), -1, s};
			if (L2 > 1e-30)
			{
				double proj = ((dstPosX - px0) * dx + (dstPosZ - pz0) * dz) / L2;
				double tstar = 1.0;
				if (proj > 0 && proj < 1)
				{
					tstar = log(1.0 - proj) / lnR;
					if (tstar < 1) tstar = 1;
					if (tstar > T) tstar = T;
				}
				else if (proj >= 1)
				{
					tstar = T;
				}
				for (int tt = (int)floor(tstar) - 1; tt <= (int)ceil(tstar) + 1; tt++)
				{
					if (tt < 1 || tt > T) continue;
					double q = rpow[tt];
					double px = px0 + mvx * SR * (1 - q);
					double pz = pz0 + mvz * SR * (1 - q);
					double py = py0 + (SR * mvy + C) * (1 - q) - g * tt;
					double dis = sqrt((px - dstPosX) * (px - dstPosX) + (pz - dstPosZ) * (pz - dstPosZ));
					if (dis < mn)
					{
						mn = dis;
						best = SortingData{ mn, vec3d(px, py, pz), tt, s, directionToString(d) };
					}
				}
			}
			if (mn != 1e10)
			{
				if (srt.size() < 100 || best.dis < srt.back().dis)
				{
					auto it = std::lower_bound(srt.begin(), srt.end(), best,
						[](const SortingData &a, const SortingData &b) { return a.dis < b.dis; });
					srt.insert(it, best);
					if (srt.size() > 100) srt.pop_back();
				}
			}
		};

		// ===== 方向方程搜索（射程窗口限制 i 范围）=====
		// 推力方向 = 目标方向：j·(vz·cosA - vx·sinA) = i·(ux·sinA - uz·cosA)
		// 即 j = i·kuA/kvA（O(1) 唯一解）；不同 i → 不同 |V| → 不同命中 tick，天然全覆盖
		// 命中条件：|V|·S·(1-r^t) = D ⇒ |V| ∈ [D/K, D]（tick=T_land 到 tick=1）
		// 而 |V(i, j*)| = C·i（C 为常数），所以 i 只需扫 [D/(K·C), D/C]，其余射程不匹配直接跳过
		double kvA = v.z * cos(angle) - v.x * sin(angle);
		double kuA = u.x * sin(angle) - u.z * cos(angle);
		if (fabs(kvA) > 1e-12)
		{
			// 非退化：按 tick 枚举直接解析 i（与退化分支同理）
			// 珍珠飞 t tick 水平位移 = |V|·S·(1-r^t)，命中目标需 = D_target
			// j* = α·i ⇒ |V| = C·i（C = |u+α·v|）⇒ i = D/(C·S·(1-r^t))，每个整数 tick 唯一解
			double alpha = kuA / kvA;
			double ux2 = u.x + alpha * v.x, uz2 = u.z + alpha * v.z;
			double Cv = sqrt(ux2 * ux2 + uz2 * uz2);
			if (Cv > 1e-12)
			{
				for (int t = 1; t <= T_land; t++)
				{
					double denom = Cv * SR * (1.0 - rpow[t]);
					if (denom < 1e-12) continue;
					double it = D_target / denom;
					int i0 = (int)floor(it);
					for (int i = i0 - 3; i <= i0 + 3; i++)
					{
						if (i < 0 || i > maxTNT) continue;
						double jstar = i * alpha;
						int j0 = (int)floor(jstar);
						for (int j = j0 - 2; j <= j0 + 2; j++)
						{
							if (j < 0 || j > maxTNT) continue;
							tryPair(i, j);
						}
					}
				}
			}
		}
		else
		{
			// 退化（v 平行目标方向，如 45° 目标）：按 tick 枚举直接解析 j
			// 珍珠飞行 t tick 的水平位移 = |V|·S·(1-r^t)，命中目标需 = D_target
			// i=0 时 |V| = j·|v| ⇒ j = D_target / (S·|v|·(1-r^t))，对每个整数 tick 唯一解
			// 只需扫 j_t ± 容差（覆盖离散化与 i 微调），tick 1..T_land 全覆盖
			double a_q = v.x * v.x + v.z * v.z;
			double vNorm = sqrt(a_q);
			// i 微调容差：i=0 方向精确对准；扫 i=0..2 覆盖退化时的微小偏差
			int iMax = min(maxTNT, 2);
			for (int t = 1; t <= T_land; t++)
			{
				double denom = SR * vNorm * (1.0 - rpow[t]);
				if (denom < 1e-12) continue;
				double jt = D_target / denom;
				int j0 = (int)floor(jt);
				for (int j = j0 - 3; j <= j0 + 3; j++)
				{
					if (j < 0 || j > maxTNT) continue;
					for (int i = 0; i <= iMax; i++)
						tryPair(i, j);
				}
			}
			// 兜底：小 maxTNT 或异常时也扫射程窗口起点附近的 j
			double jLoGuard = max(0, (int)floor(Rlo / vNorm) - 5);
			double jHiGuard = min((double)maxTNT, ceil(Rhi / vNorm) + 5);
			for (int j = (int)jLoGuard; j <= (int)jHiGuard && j - (int)jLoGuard < 11; j++)
				tryPair(0, j);
		}
	}

	qDebug() << srt.size() << ' ' << cnt;

	sort(srt.begin(), srt.end(), cmpDistance);
	result.clear();
	for (int i = 0; i < min((int)srt.size(), 100); i++) result.push_back(srt[i]);
	updateResult();
	lastClickedSettingColumn = 0;
}
void PearlCannonHelper::sortSettingTable(int column)
{
	switch (column)
	{
	case 0:
	case 1:
		sort(result.begin(), result.end(), cmpDistance);
		break;
	case 2:
		sort(result.begin(), result.end(), cmpTick);
		break;
	case 3:
		sort(result.begin(), result.end(), cmpLightGray);
		break;
	case 4:
		sort(result.begin(), result.end(), cmpDarkGray);
		break;
	case 5:
		sort(result.begin(), result.end(), cmpTNT);
		break;
	default:
		break;
	}
	if (column == lastClickedSettingColumn)
	{
		lastClickedSettingColumn = -1;
		for (int i = 0; i < result.size() / 2; i++)
			swap(result[i], result[result.size() - i - 1]);
	}
	else
	{
		lastClickedSettingColumn = column;
	}
	updateResult();
}

void PearlCannonHelper::on_languageComboBox_activated(int index = 1)
{
	static QTranslator translator;
	qApp->removeTranslator(&translator);
	QString langFile = QString(":/language/pearlcannonhelper_zh.qm");
}

void PearlCannonHelper::on_settingTableWidget_cellClicked(int row, int column)
{
	if (row == -1) return;
	//ui.selectedSettingBitsLineEdit->setText(result[row].setting.toString());
}
void PearlCannonHelper::on_applyPushButton_pressed()
{
	int row = ui.settingTableWidget->currentRow();
	if (row == -1) return;
	setting = result[row].setting;
	updatePearlInfo();
	ui.tabWidget->setCurrentIndex(1);
}
