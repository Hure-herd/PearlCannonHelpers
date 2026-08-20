#include "ThrustDialog.h"
#include <QFormLayout>
#include <QGroupBox>
#include <QHBoxLayout>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLabel>
#include <QRegularExpressionValidator>

ThrustDialog::ThrustDialog(vec3d thrusts[4], QWidget *parent)
	: QDialog(parent)
{
	setWindowTitle(QStringLiteral("TNT给予动量设置"));
	setMinimumWidth(360);

	const QString names[4] = {
		QStringLiteral("西北 (NW)  X+ Z+"),
		QStringLiteral("东北 (NE)  X- Z+"),
		QStringLiteral("西南 (SW)  X+ Z-"),
		QStringLiteral("东南 (SE)  X- Z-")
	};
	const char *axis[3] = { "X", "Y", "Z" };

	QVBoxLayout *mainLay = new QVBoxLayout(this);

	for (int g = 0; g < 4; g++)
	{
		QGroupBox *box = new QGroupBox(names[g], this);
		QGridLayout *grid = new QGridLayout(box);
		for (int k = 0; k < 3; k++)
		{
			QLabel *lab = new QLabel(axis[k], box);
			grid->addWidget(lab, 0, k * 2);
			QLineEdit *edit = new QLineEdit(box);
			edit->setValidator(new QRegularExpressionValidator(
				QRegularExpression(QStringLiteral("^-?\\d*\\.?\\d*$")), edit));
			double val = (k == 0) ? thrusts[g].x : (k == 1) ? thrusts[g].y : thrusts[g].z;
			edit->setText(QString::number(val, 'f', 10));
			grid->addWidget(edit, 0, k * 2 + 1);
			m_edit[g][k] = edit;
		}
		mainLay->addWidget(box);
	}

	QHBoxLayout *btnLay = new QHBoxLayout;
	QPushButton *okBtn = new QPushButton(QStringLiteral("确定"), this);
	QPushButton *cancelBtn = new QPushButton(QStringLiteral("取消"), this);
	btnLay->addStretch();
	btnLay->addWidget(okBtn);
	btnLay->addWidget(cancelBtn);
	mainLay->addLayout(btnLay);

	connect(okBtn, &QPushButton::clicked, this, &QDialog::accept);
	connect(cancelBtn, &QPushButton::clicked, this, &QDialog::reject);
}

void ThrustDialog::getValues(vec3d out[4]) const
{
	for (int g = 0; g < 4; g++)
	{
		out[g].x = m_edit[g][0]->text().toDouble();
		out[g].y = m_edit[g][1]->text().toDouble();
		out[g].z = m_edit[g][2]->text().toDouble();
	}
}
