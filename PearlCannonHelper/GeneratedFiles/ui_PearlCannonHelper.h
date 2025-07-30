/********************************************************************************
** Form generated from reading UI file 'PearlCannonHelper.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PEARLCANNONHELPER_H
#define UI_PEARLCANNONHELPER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PearlCannonHelperClass
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QTableWidget *settingTableWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_6;
    QLabel *maxUnitLabel;
    QLabel *groundYLabel_2;
    QLineEdit *maxTickLineEdit_2;
    QLineEdit *groundYLineEdit_2;
    QSpinBox *maxTNTSpinBox;
    QLabel *maxTickLabel_2;
    QGridLayout *gridLayout_7;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *applyPushButton;
    QPushButton *genPushButton;
    QGroupBox *motionGroupBox_2;
    QGridLayout *gridLayout_9;
    QLineEdit *motionXLineEdit_2;
    QLabel *motionXLabel_2;
    QLabel *motionYLabel_2;
    QLineEdit *motionZLineEdit_2;
    QLineEdit *motionYLineEdit_2;
    QLabel *motionZLabel_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_5;
    QLabel *posZLabel_3;
    QLabel *posXLabel_3;
    QLineEdit *dstXLineEdit;
    QLineEdit *dstZLineEdit;
    QGroupBox *groupBox_3;
    QLineEdit *PlayerYLineEdit;
    QLineEdit *pearlZLineEdit;
    QLabel *pearlZLabel;
    QLabel *pearlXLabel;
    QLineEdit *pearlXLineEdit;
    QLabel *PlayerYLabel;
    QLabel *pearlYMotion;
    QLineEdit *pearlYMotionEdit;
    QWidget *tab;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *posGroupBox;
    QGridLayout *gridLayout;
    QLabel *posYLabel;
    QLineEdit *posYLineEdit;
    QLabel *posXLabel;
    QLineEdit *posZLineEdit;
    QLineEdit *posXLineEdit;
    QLabel *posZLabel;
    QGroupBox *motionGroupBox;
    QGridLayout *gridLayout_2;
    QLineEdit *motionXLineEdit;
    QLabel *motionXLabel;
    QLabel *motionYLabel;
    QLineEdit *motionZLineEdit;
    QLineEdit *motionYLineEdit;
    QLabel *motionZLabel;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_8;
    QLabel *groundYLabel;
    QLineEdit *groundYLineEdit;
    QLabel *maxTickLabel;
    QLineEdit *maxTickLineEdit;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *amoutLabel2;
    QSpinBox *amoutSpinBox2;
    QHBoxLayout *horizontalLayout_7;
    QComboBox *directionComboBox;
    QHBoxLayout *horizontalLayout_6;
    QLabel *amoutLabel1;
    QSpinBox *amoutSpinBox1;
    QCheckBox *isStartFromExplosionCheckBox;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_11;
    QCheckBox *displayMomentumCheckBox;
    QTableWidget *traceTableWidget;
    QComboBox *directionComboBox_2;
    QLabel *pearlYMotion_2;
    QLabel *CreditLabel;

    void setupUi(QMainWindow *PearlCannonHelperClass)
    {
        if (PearlCannonHelperClass->objectName().isEmpty())
            PearlCannonHelperClass->setObjectName(QString::fromUtf8("PearlCannonHelperClass"));
        PearlCannonHelperClass->resize(560, 743);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PearlCannonHelperClass->sizePolicy().hasHeightForWidth());
        PearlCannonHelperClass->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/PearlCannonHelper/exe_ico.ico"), QSize(), QIcon::Normal, QIcon::Off);
        PearlCannonHelperClass->setWindowIcon(icon);
        centralWidget = new QWidget(PearlCannonHelperClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(9, 9, 542, 697));
        QFont font;
        font.setPointSize(9);
        tabWidget->setFont(font);
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        settingTableWidget = new QTableWidget(tab_2);
        settingTableWidget->setObjectName(QString::fromUtf8("settingTableWidget"));
        settingTableWidget->setGeometry(QRect(9, 207, 521, 461));
        layoutWidget = new QWidget(tab_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(317, 10, 211, 192));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_4 = new QGroupBox(layoutWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy1);
        groupBox_4->setFont(font);
        gridLayout_6 = new QGridLayout(groupBox_4);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        maxUnitLabel = new QLabel(groupBox_4);
        maxUnitLabel->setObjectName(QString::fromUtf8("maxUnitLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(maxUnitLabel->sizePolicy().hasHeightForWidth());
        maxUnitLabel->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(9);
        maxUnitLabel->setFont(font1);
        maxUnitLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(maxUnitLabel, 0, 0, 1, 1);

        groundYLabel_2 = new QLabel(groupBox_4);
        groundYLabel_2->setObjectName(QString::fromUtf8("groundYLabel_2"));
        groundYLabel_2->setFont(font1);

        gridLayout_6->addWidget(groundYLabel_2, 1, 0, 1, 1);

        maxTickLineEdit_2 = new QLineEdit(groupBox_4);
        maxTickLineEdit_2->setObjectName(QString::fromUtf8("maxTickLineEdit_2"));
        maxTickLineEdit_2->setFont(font1);

        gridLayout_6->addWidget(maxTickLineEdit_2, 2, 1, 1, 1);

        groundYLineEdit_2 = new QLineEdit(groupBox_4);
        groundYLineEdit_2->setObjectName(QString::fromUtf8("groundYLineEdit_2"));
        groundYLineEdit_2->setFont(font1);

        gridLayout_6->addWidget(groundYLineEdit_2, 1, 1, 1, 1);

        maxTNTSpinBox = new QSpinBox(groupBox_4);
        maxTNTSpinBox->setObjectName(QString::fromUtf8("maxTNTSpinBox"));
        maxTNTSpinBox->setFont(font);
        maxTNTSpinBox->setMaximum(1820);
        maxTNTSpinBox->setValue(1040);

        gridLayout_6->addWidget(maxTNTSpinBox, 0, 1, 1, 1);

        maxTickLabel_2 = new QLabel(groupBox_4);
        maxTickLabel_2->setObjectName(QString::fromUtf8("maxTickLabel_2"));
        maxTickLabel_2->setFont(font1);

        gridLayout_6->addWidget(maxTickLabel_2, 2, 0, 1, 1);


        verticalLayout->addWidget(groupBox_4);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(6);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_6, 0, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_4, 0, 0, 1, 1);

        applyPushButton = new QPushButton(layoutWidget);
        applyPushButton->setObjectName(QString::fromUtf8("applyPushButton"));
        applyPushButton->setFont(font);

        gridLayout_7->addWidget(applyPushButton, 1, 1, 1, 1);

        genPushButton = new QPushButton(layoutWidget);
        genPushButton->setObjectName(QString::fromUtf8("genPushButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(genPushButton->sizePolicy().hasHeightForWidth());
        genPushButton->setSizePolicy(sizePolicy3);
        genPushButton->setFont(font);

        gridLayout_7->addWidget(genPushButton, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_7);

        motionGroupBox_2 = new QGroupBox(tab_2);
        motionGroupBox_2->setObjectName(QString::fromUtf8("motionGroupBox_2"));
        motionGroupBox_2->setGeometry(QRect(150, 10, 165, 104));
        motionGroupBox_2->setFont(font1);
        gridLayout_9 = new QGridLayout(motionGroupBox_2);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        motionXLineEdit_2 = new QLineEdit(motionGroupBox_2);
        motionXLineEdit_2->setObjectName(QString::fromUtf8("motionXLineEdit_2"));
        sizePolicy3.setHeightForWidth(motionXLineEdit_2->sizePolicy().hasHeightForWidth());
        motionXLineEdit_2->setSizePolicy(sizePolicy3);
        motionXLineEdit_2->setFont(font1);

        gridLayout_9->addWidget(motionXLineEdit_2, 0, 1, 1, 1);

        motionXLabel_2 = new QLabel(motionGroupBox_2);
        motionXLabel_2->setObjectName(QString::fromUtf8("motionXLabel_2"));
        sizePolicy2.setHeightForWidth(motionXLabel_2->sizePolicy().hasHeightForWidth());
        motionXLabel_2->setSizePolicy(sizePolicy2);
        motionXLabel_2->setFont(font1);
        motionXLabel_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_9->addWidget(motionXLabel_2, 0, 0, 1, 1);

        motionYLabel_2 = new QLabel(motionGroupBox_2);
        motionYLabel_2->setObjectName(QString::fromUtf8("motionYLabel_2"));
        sizePolicy2.setHeightForWidth(motionYLabel_2->sizePolicy().hasHeightForWidth());
        motionYLabel_2->setSizePolicy(sizePolicy2);
        motionYLabel_2->setFont(font1);
        motionYLabel_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_9->addWidget(motionYLabel_2, 1, 0, 1, 1);

        motionZLineEdit_2 = new QLineEdit(motionGroupBox_2);
        motionZLineEdit_2->setObjectName(QString::fromUtf8("motionZLineEdit_2"));
        sizePolicy3.setHeightForWidth(motionZLineEdit_2->sizePolicy().hasHeightForWidth());
        motionZLineEdit_2->setSizePolicy(sizePolicy3);
        motionZLineEdit_2->setFont(font1);

        gridLayout_9->addWidget(motionZLineEdit_2, 2, 1, 1, 1);

        motionYLineEdit_2 = new QLineEdit(motionGroupBox_2);
        motionYLineEdit_2->setObjectName(QString::fromUtf8("motionYLineEdit_2"));
        sizePolicy3.setHeightForWidth(motionYLineEdit_2->sizePolicy().hasHeightForWidth());
        motionYLineEdit_2->setSizePolicy(sizePolicy3);
        motionYLineEdit_2->setFont(font1);

        gridLayout_9->addWidget(motionYLineEdit_2, 1, 1, 1, 1);

        motionZLabel_2 = new QLabel(motionGroupBox_2);
        motionZLabel_2->setObjectName(QString::fromUtf8("motionZLabel_2"));
        sizePolicy2.setHeightForWidth(motionZLabel_2->sizePolicy().hasHeightForWidth());
        motionZLabel_2->setSizePolicy(sizePolicy2);
        motionZLabel_2->setFont(font1);
        motionZLabel_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_9->addWidget(motionZLabel_2, 2, 0, 1, 1);

        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(150, 120, 161, 78));
        groupBox->setFont(font1);
        gridLayout_5 = new QGridLayout(groupBox);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        posZLabel_3 = new QLabel(groupBox);
        posZLabel_3->setObjectName(QString::fromUtf8("posZLabel_3"));
        sizePolicy2.setHeightForWidth(posZLabel_3->sizePolicy().hasHeightForWidth());
        posZLabel_3->setSizePolicy(sizePolicy2);
        posZLabel_3->setFont(font1);
        posZLabel_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(posZLabel_3, 1, 0, 1, 1);

        posXLabel_3 = new QLabel(groupBox);
        posXLabel_3->setObjectName(QString::fromUtf8("posXLabel_3"));
        sizePolicy2.setHeightForWidth(posXLabel_3->sizePolicy().hasHeightForWidth());
        posXLabel_3->setSizePolicy(sizePolicy2);
        posXLabel_3->setFont(font1);
        posXLabel_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(posXLabel_3, 0, 0, 1, 1);

        dstXLineEdit = new QLineEdit(groupBox);
        dstXLineEdit->setObjectName(QString::fromUtf8("dstXLineEdit"));
        sizePolicy3.setHeightForWidth(dstXLineEdit->sizePolicy().hasHeightForWidth());
        dstXLineEdit->setSizePolicy(sizePolicy3);
        dstXLineEdit->setFont(font1);

        gridLayout_5->addWidget(dstXLineEdit, 0, 1, 1, 1);

        dstZLineEdit = new QLineEdit(groupBox);
        dstZLineEdit->setObjectName(QString::fromUtf8("dstZLineEdit"));
        sizePolicy3.setHeightForWidth(dstZLineEdit->sizePolicy().hasHeightForWidth());
        dstZLineEdit->setSizePolicy(sizePolicy3);
        dstZLineEdit->setFont(font1);

        gridLayout_5->addWidget(dstZLineEdit, 1, 1, 1, 1);

        groupBox_3 = new QGroupBox(tab_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(11, 10, 131, 191));
        sizePolicy1.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy1);
        groupBox_3->setFont(font1);
        PlayerYLineEdit = new QLineEdit(groupBox_3);
        PlayerYLineEdit->setObjectName(QString::fromUtf8("PlayerYLineEdit"));
        PlayerYLineEdit->setGeometry(QRect(50, 50, 75, 20));
        sizePolicy3.setHeightForWidth(PlayerYLineEdit->sizePolicy().hasHeightForWidth());
        PlayerYLineEdit->setSizePolicy(sizePolicy3);
        PlayerYLineEdit->setMinimumSize(QSize(0, 0));
        PlayerYLineEdit->setMaximumSize(QSize(16777215, 16777215));
        PlayerYLineEdit->setFont(font1);
        pearlZLineEdit = new QLineEdit(groupBox_3);
        pearlZLineEdit->setObjectName(QString::fromUtf8("pearlZLineEdit"));
        pearlZLineEdit->setGeometry(QRect(50, 80, 75, 20));
        sizePolicy3.setHeightForWidth(pearlZLineEdit->sizePolicy().hasHeightForWidth());
        pearlZLineEdit->setSizePolicy(sizePolicy3);
        pearlZLineEdit->setFont(font1);
        pearlZLineEdit->setReadOnly(false);
        pearlZLabel = new QLabel(groupBox_3);
        pearlZLabel->setObjectName(QString::fromUtf8("pearlZLabel"));
        pearlZLabel->setGeometry(QRect(10, 80, 30, 16));
        sizePolicy2.setHeightForWidth(pearlZLabel->sizePolicy().hasHeightForWidth());
        pearlZLabel->setSizePolicy(sizePolicy2);
        pearlZLabel->setFont(font1);
        pearlZLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pearlXLabel = new QLabel(groupBox_3);
        pearlXLabel->setObjectName(QString::fromUtf8("pearlXLabel"));
        pearlXLabel->setGeometry(QRect(10, 22, 30, 16));
        sizePolicy2.setHeightForWidth(pearlXLabel->sizePolicy().hasHeightForWidth());
        pearlXLabel->setSizePolicy(sizePolicy2);
        pearlXLabel->setFont(font1);
        pearlXLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pearlXLineEdit = new QLineEdit(groupBox_3);
        pearlXLineEdit->setObjectName(QString::fromUtf8("pearlXLineEdit"));
        pearlXLineEdit->setGeometry(QRect(50, 20, 75, 20));
        sizePolicy3.setHeightForWidth(pearlXLineEdit->sizePolicy().hasHeightForWidth());
        pearlXLineEdit->setSizePolicy(sizePolicy3);
        pearlXLineEdit->setFont(font1);
        pearlXLineEdit->setReadOnly(false);
        PlayerYLabel = new QLabel(groupBox_3);
        PlayerYLabel->setObjectName(QString::fromUtf8("PlayerYLabel"));
        PlayerYLabel->setGeometry(QRect(10, 50, 30, 16));
        PlayerYLabel->setFont(font1);
        pearlYMotion = new QLabel(groupBox_3);
        pearlYMotion->setObjectName(QString::fromUtf8("pearlYMotion"));
        pearlYMotion->setGeometry(QRect(10, 110, 30, 16));
        sizePolicy2.setHeightForWidth(pearlYMotion->sizePolicy().hasHeightForWidth());
        pearlYMotion->setSizePolicy(sizePolicy2);
        pearlYMotion->setFont(font1);
        pearlYMotion->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pearlYMotionEdit = new QLineEdit(groupBox_3);
        pearlYMotionEdit->setObjectName(QString::fromUtf8("pearlYMotionEdit"));
        pearlYMotionEdit->setGeometry(QRect(50, 110, 75, 20));
        sizePolicy3.setHeightForWidth(pearlYMotionEdit->sizePolicy().hasHeightForWidth());
        pearlYMotionEdit->setSizePolicy(sizePolicy3);
        pearlYMotionEdit->setFont(font1);
        pearlYMotionEdit->setReadOnly(false);
        tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_6 = new QVBoxLayout(tab);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        posGroupBox = new QGroupBox(tab);
        posGroupBox->setObjectName(QString::fromUtf8("posGroupBox"));
        sizePolicy1.setHeightForWidth(posGroupBox->sizePolicy().hasHeightForWidth());
        posGroupBox->setSizePolicy(sizePolicy1);
        posGroupBox->setFont(font1);
        gridLayout = new QGridLayout(posGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        posYLabel = new QLabel(posGroupBox);
        posYLabel->setObjectName(QString::fromUtf8("posYLabel"));
        sizePolicy2.setHeightForWidth(posYLabel->sizePolicy().hasHeightForWidth());
        posYLabel->setSizePolicy(sizePolicy2);
        posYLabel->setFont(font1);
        posYLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(posYLabel, 1, 0, 1, 1);

        posYLineEdit = new QLineEdit(posGroupBox);
        posYLineEdit->setObjectName(QString::fromUtf8("posYLineEdit"));
        sizePolicy3.setHeightForWidth(posYLineEdit->sizePolicy().hasHeightForWidth());
        posYLineEdit->setSizePolicy(sizePolicy3);
        posYLineEdit->setFont(font1);

        gridLayout->addWidget(posYLineEdit, 1, 1, 1, 1);

        posXLabel = new QLabel(posGroupBox);
        posXLabel->setObjectName(QString::fromUtf8("posXLabel"));
        sizePolicy2.setHeightForWidth(posXLabel->sizePolicy().hasHeightForWidth());
        posXLabel->setSizePolicy(sizePolicy2);
        posXLabel->setFont(font1);
        posXLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(posXLabel, 0, 0, 1, 1);

        posZLineEdit = new QLineEdit(posGroupBox);
        posZLineEdit->setObjectName(QString::fromUtf8("posZLineEdit"));
        sizePolicy3.setHeightForWidth(posZLineEdit->sizePolicy().hasHeightForWidth());
        posZLineEdit->setSizePolicy(sizePolicy3);
        posZLineEdit->setFont(font1);

        gridLayout->addWidget(posZLineEdit, 2, 1, 1, 1);

        posXLineEdit = new QLineEdit(posGroupBox);
        posXLineEdit->setObjectName(QString::fromUtf8("posXLineEdit"));
        sizePolicy3.setHeightForWidth(posXLineEdit->sizePolicy().hasHeightForWidth());
        posXLineEdit->setSizePolicy(sizePolicy3);
        posXLineEdit->setFont(font1);

        gridLayout->addWidget(posXLineEdit, 0, 1, 1, 1);

        posZLabel = new QLabel(posGroupBox);
        posZLabel->setObjectName(QString::fromUtf8("posZLabel"));
        sizePolicy2.setHeightForWidth(posZLabel->sizePolicy().hasHeightForWidth());
        posZLabel->setSizePolicy(sizePolicy2);
        posZLabel->setFont(font1);
        posZLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(posZLabel, 2, 0, 1, 1);


        horizontalLayout_2->addWidget(posGroupBox);

        motionGroupBox = new QGroupBox(tab);
        motionGroupBox->setObjectName(QString::fromUtf8("motionGroupBox"));
        motionGroupBox->setFont(font1);
        gridLayout_2 = new QGridLayout(motionGroupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        motionXLineEdit = new QLineEdit(motionGroupBox);
        motionXLineEdit->setObjectName(QString::fromUtf8("motionXLineEdit"));
        sizePolicy3.setHeightForWidth(motionXLineEdit->sizePolicy().hasHeightForWidth());
        motionXLineEdit->setSizePolicy(sizePolicy3);
        motionXLineEdit->setFont(font1);

        gridLayout_2->addWidget(motionXLineEdit, 0, 1, 1, 1);

        motionXLabel = new QLabel(motionGroupBox);
        motionXLabel->setObjectName(QString::fromUtf8("motionXLabel"));
        sizePolicy2.setHeightForWidth(motionXLabel->sizePolicy().hasHeightForWidth());
        motionXLabel->setSizePolicy(sizePolicy2);
        motionXLabel->setFont(font1);
        motionXLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(motionXLabel, 0, 0, 1, 1);

        motionYLabel = new QLabel(motionGroupBox);
        motionYLabel->setObjectName(QString::fromUtf8("motionYLabel"));
        sizePolicy2.setHeightForWidth(motionYLabel->sizePolicy().hasHeightForWidth());
        motionYLabel->setSizePolicy(sizePolicy2);
        motionYLabel->setFont(font1);
        motionYLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(motionYLabel, 1, 0, 1, 1);

        motionZLineEdit = new QLineEdit(motionGroupBox);
        motionZLineEdit->setObjectName(QString::fromUtf8("motionZLineEdit"));
        sizePolicy3.setHeightForWidth(motionZLineEdit->sizePolicy().hasHeightForWidth());
        motionZLineEdit->setSizePolicy(sizePolicy3);
        motionZLineEdit->setFont(font1);

        gridLayout_2->addWidget(motionZLineEdit, 2, 1, 1, 1);

        motionYLineEdit = new QLineEdit(motionGroupBox);
        motionYLineEdit->setObjectName(QString::fromUtf8("motionYLineEdit"));
        sizePolicy3.setHeightForWidth(motionYLineEdit->sizePolicy().hasHeightForWidth());
        motionYLineEdit->setSizePolicy(sizePolicy3);
        motionYLineEdit->setFont(font1);

        gridLayout_2->addWidget(motionYLineEdit, 1, 1, 1, 1);

        motionZLabel = new QLabel(motionGroupBox);
        motionZLabel->setObjectName(QString::fromUtf8("motionZLabel"));
        sizePolicy2.setHeightForWidth(motionZLabel->sizePolicy().hasHeightForWidth());
        motionZLabel->setSizePolicy(sizePolicy2);
        motionZLabel->setFont(font1);
        motionZLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(motionZLabel, 2, 0, 1, 1);


        horizontalLayout_2->addWidget(motionGroupBox);

        groupBox_5 = new QGroupBox(tab);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_8 = new QGridLayout(groupBox_5);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        groundYLabel = new QLabel(groupBox_5);
        groundYLabel->setObjectName(QString::fromUtf8("groundYLabel"));
        groundYLabel->setFont(font1);

        gridLayout_8->addWidget(groundYLabel, 0, 0, 1, 1);

        groundYLineEdit = new QLineEdit(groupBox_5);
        groundYLineEdit->setObjectName(QString::fromUtf8("groundYLineEdit"));
        groundYLineEdit->setFont(font1);

        gridLayout_8->addWidget(groundYLineEdit, 0, 1, 1, 1);

        maxTickLabel = new QLabel(groupBox_5);
        maxTickLabel->setObjectName(QString::fromUtf8("maxTickLabel"));
        maxTickLabel->setFont(font1);

        gridLayout_8->addWidget(maxTickLabel, 1, 0, 1, 1);

        maxTickLineEdit = new QLineEdit(groupBox_5);
        maxTickLineEdit->setObjectName(QString::fromUtf8("maxTickLineEdit"));
        maxTickLineEdit->setFont(font1);

        gridLayout_8->addWidget(maxTickLineEdit, 1, 1, 1, 1);


        horizontalLayout_2->addWidget(groupBox_5);


        verticalLayout_6->addLayout(horizontalLayout_2);

        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        groupBox_2->setFont(font);
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        amoutLabel2 = new QLabel(groupBox_2);
        amoutLabel2->setObjectName(QString::fromUtf8("amoutLabel2"));
        amoutLabel2->setFont(font);

        horizontalLayout_8->addWidget(amoutLabel2);

        amoutSpinBox2 = new QSpinBox(groupBox_2);
        amoutSpinBox2->setObjectName(QString::fromUtf8("amoutSpinBox2"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(amoutSpinBox2->sizePolicy().hasHeightForWidth());
        amoutSpinBox2->setSizePolicy(sizePolicy4);
        amoutSpinBox2->setFont(font);
        amoutSpinBox2->setMaximum(1820);

        horizontalLayout_8->addWidget(amoutSpinBox2);


        gridLayout_3->addLayout(horizontalLayout_8, 1, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        directionComboBox = new QComboBox(groupBox_2);
        directionComboBox->addItem(QString());
        directionComboBox->addItem(QString());
        directionComboBox->addItem(QString());
        directionComboBox->addItem(QString());
        directionComboBox->setObjectName(QString::fromUtf8("directionComboBox"));
        directionComboBox->setFont(font);

        horizontalLayout_7->addWidget(directionComboBox);


        gridLayout_3->addLayout(horizontalLayout_7, 1, 1, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        amoutLabel1 = new QLabel(groupBox_2);
        amoutLabel1->setObjectName(QString::fromUtf8("amoutLabel1"));
        amoutLabel1->setFont(font);

        horizontalLayout_6->addWidget(amoutLabel1);

        amoutSpinBox1 = new QSpinBox(groupBox_2);
        amoutSpinBox1->setObjectName(QString::fromUtf8("amoutSpinBox1"));
        sizePolicy4.setHeightForWidth(amoutSpinBox1->sizePolicy().hasHeightForWidth());
        amoutSpinBox1->setSizePolicy(sizePolicy4);
        amoutSpinBox1->setFont(font);
        amoutSpinBox1->setMaximum(1820);

        horizontalLayout_6->addWidget(amoutSpinBox1);


        gridLayout_3->addLayout(horizontalLayout_6, 0, 0, 1, 1);

        isStartFromExplosionCheckBox = new QCheckBox(groupBox_2);
        isStartFromExplosionCheckBox->setObjectName(QString::fromUtf8("isStartFromExplosionCheckBox"));
        isStartFromExplosionCheckBox->setFont(font);

        gridLayout_3->addWidget(isStartFromExplosionCheckBox, 0, 2, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);
        label_6->setMouseTracking(false);
        label_6->setTabletTracking(false);
        label_6->setAcceptDrops(false);
        label_6->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_9->addWidget(label_6);


        gridLayout_3->addLayout(horizontalLayout_9, 0, 1, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        displayMomentumCheckBox = new QCheckBox(groupBox_2);
        displayMomentumCheckBox->setObjectName(QString::fromUtf8("displayMomentumCheckBox"));
        displayMomentumCheckBox->setFont(font);
        displayMomentumCheckBox->setChecked(true);
        displayMomentumCheckBox->setTristate(false);

        horizontalLayout_11->addWidget(displayMomentumCheckBox);


        gridLayout_3->addLayout(horizontalLayout_11, 1, 2, 1, 1);


        verticalLayout_3->addLayout(gridLayout_3);


        verticalLayout_6->addWidget(groupBox_2);

        traceTableWidget = new QTableWidget(tab);
        traceTableWidget->setObjectName(QString::fromUtf8("traceTableWidget"));

        verticalLayout_6->addWidget(traceTableWidget);

        tabWidget->addTab(tab, QString());
        directionComboBox_2 = new QComboBox(centralWidget);
        directionComboBox_2->addItem(QString());
        directionComboBox_2->addItem(QString());
        directionComboBox_2->setObjectName(QString::fromUtf8("directionComboBox_2"));
        directionComboBox_2->setGeometry(QRect(60, 710, 71, 20));
        directionComboBox_2->setFont(font);
        pearlYMotion_2 = new QLabel(centralWidget);
        pearlYMotion_2->setObjectName(QString::fromUtf8("pearlYMotion_2"));
        pearlYMotion_2->setGeometry(QRect(0, 710, 51, 20));
        sizePolicy2.setHeightForWidth(pearlYMotion_2->sizePolicy().hasHeightForWidth());
        pearlYMotion_2->setSizePolicy(sizePolicy2);
        pearlYMotion_2->setFont(font1);
        pearlYMotion_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        CreditLabel = new QLabel(centralWidget);
        CreditLabel->setObjectName(QString::fromUtf8("CreditLabel"));
        CreditLabel->setGeometry(QRect(420, 710, 120, 16));
        CreditLabel->setFont(font1);
        CreditLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        PearlCannonHelperClass->setCentralWidget(centralWidget);

        retranslateUi(PearlCannonHelperClass);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PearlCannonHelperClass);
    } // setupUi

    void retranslateUi(QMainWindow *PearlCannonHelperClass)
    {
        PearlCannonHelperClass->setWindowTitle(QCoreApplication::translate("PearlCannonHelperClass", "\347\217\215\347\217\240\347\202\256\345\212\251\346\211\213", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("PearlCannonHelperClass", "\351\231\220\345\210\266\346\235\241\344\273\266", nullptr));
        maxUnitLabel->setText(QCoreApplication::translate("PearlCannonHelperClass", "\346\234\200\345\244\247TNT\346\225\260", nullptr));
#if QT_CONFIG(tooltip)
        groundYLabel_2->setToolTip(QCoreApplication::translate("PearlCannonHelperClass", "The ground y value. If you are above bedrock use 128", nullptr));
#endif // QT_CONFIG(tooltip)
        groundYLabel_2->setText(QCoreApplication::translate("PearlCannonHelperClass", "\345\234\260\351\235\242\351\253\230\345\272\246", nullptr));
        maxTickLineEdit_2->setText(QCoreApplication::translate("PearlCannonHelperClass", "1000", nullptr));
        groundYLineEdit_2->setText(QCoreApplication::translate("PearlCannonHelperClass", "64", nullptr));
#if QT_CONFIG(tooltip)
        maxTickLabel_2->setToolTip(QCoreApplication::translate("PearlCannonHelperClass", "Maximum simulating time", nullptr));
#endif // QT_CONFIG(tooltip)
        maxTickLabel_2->setText(QCoreApplication::translate("PearlCannonHelperClass", "\346\234\200\345\244\247\350\277\255\344\273\243\345\210\273\346\225\260", nullptr));
#if QT_CONFIG(tooltip)
        applyPushButton->setToolTip(QCoreApplication::translate("PearlCannonHelperClass", "Apply selected setting", nullptr));
#endif // QT_CONFIG(tooltip)
        applyPushButton->setText(QCoreApplication::translate("PearlCannonHelperClass", "\345\272\224\347\224\250", nullptr));
#if QT_CONFIG(tooltip)
        genPushButton->setToolTip(QCoreApplication::translate("PearlCannonHelperClass", "Generate recommended settings", nullptr));
#endif // QT_CONFIG(tooltip)
        genPushButton->setText(QCoreApplication::translate("PearlCannonHelperClass", "\347\224\237\346\210\220", nullptr));
        motionGroupBox_2->setTitle(QCoreApplication::translate("PearlCannonHelperClass", "TNT\347\273\231\344\272\210\345\212\250\351\207\217", nullptr));
        motionXLineEdit_2->setText(QCoreApplication::translate("PearlCannonHelperClass", "0.602541821", nullptr));
        motionXLabel_2->setText(QCoreApplication::translate("PearlCannonHelperClass", "X", nullptr));
        motionYLabel_2->setText(QCoreApplication::translate("PearlCannonHelperClass", "Y", nullptr));
        motionZLineEdit_2->setText(QCoreApplication::translate("PearlCannonHelperClass", "0.602541821", nullptr));
        motionYLineEdit_2->setText(QCoreApplication::translate("PearlCannonHelperClass", "-0.0022355", nullptr));
        motionZLabel_2->setText(QCoreApplication::translate("PearlCannonHelperClass", "Z", nullptr));
#if QT_CONFIG(tooltip)
        groupBox->setToolTip(QCoreApplication::translate("PearlCannonHelperClass", "Where you want to go", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("PearlCannonHelperClass", "\347\233\256\347\232\204\345\234\260", nullptr));
        posZLabel_3->setText(QCoreApplication::translate("PearlCannonHelperClass", "Z", nullptr));
        posXLabel_3->setText(QCoreApplication::translate("PearlCannonHelperClass", "X", nullptr));
        dstXLineEdit->setText(QCoreApplication::translate("PearlCannonHelperClass", "1000", nullptr));
        dstZLineEdit->setText(QCoreApplication::translate("PearlCannonHelperClass", "4000", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("PearlCannonHelperClass", "\347\217\215\347\217\240\347\202\256\344\277\241\346\201\257", nullptr));
        PlayerYLineEdit->setText(QCoreApplication::translate("PearlCannonHelperClass", "113.345698", nullptr));
        pearlZLineEdit->setText(QCoreApplication::translate("PearlCannonHelperClass", "-55.9375", nullptr));
#if QT_CONFIG(tooltip)
        pearlZLabel->setToolTip(QCoreApplication::translate("PearlCannonHelperClass", "The z coordinate of the aligned pearl", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        pearlZLabel->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        pearlZLabel->setText(QCoreApplication::translate("PearlCannonHelperClass", "\347\217\215\347\217\240Z", nullptr));
#if QT_CONFIG(tooltip)
        pearlXLabel->setToolTip(QCoreApplication::translate("PearlCannonHelperClass", "The x coordinate of the aligned pearl", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        pearlXLabel->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        pearlXLabel->setText(QCoreApplication::translate("PearlCannonHelperClass", "\347\217\215\347\217\240X", nullptr));
        pearlXLineEdit->setText(QCoreApplication::translate("PearlCannonHelperClass", "-155.0625", nullptr));
#if QT_CONFIG(tooltip)
        PlayerYLabel->setToolTip(QCoreApplication::translate("PearlCannonHelperClass", "The y value of the player entity when he's ready to throw the pearl", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        PlayerYLabel->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        PlayerYLabel->setText(QCoreApplication::translate("PearlCannonHelperClass", "\347\217\215\347\217\240Y", nullptr));
#if QT_CONFIG(tooltip)
        pearlYMotion->setToolTip(QCoreApplication::translate("PearlCannonHelperClass", "The z coordinate of the aligned pearl", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        pearlYMotion->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        pearlYMotion->setText(QCoreApplication::translate("PearlCannonHelperClass", "Y\345\212\250\351\207\217", nullptr));
        pearlYMotionEdit->setText(QCoreApplication::translate("PearlCannonHelperClass", "0.174457", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("PearlCannonHelperClass", "\351\205\215\347\275\256\347\224\237\346\210\220\345\231\250", nullptr));
        posGroupBox->setTitle(QCoreApplication::translate("PearlCannonHelperClass", "\345\235\220\346\240\207", nullptr));
        posYLabel->setText(QCoreApplication::translate("PearlCannonHelperClass", "Y", nullptr));
        posYLineEdit->setText(QString());
        posXLabel->setText(QCoreApplication::translate("PearlCannonHelperClass", "X", nullptr));
        posZLineEdit->setText(QString());
        posXLineEdit->setText(QString());
        posZLabel->setText(QCoreApplication::translate("PearlCannonHelperClass", "Z", nullptr));
        motionGroupBox->setTitle(QCoreApplication::translate("PearlCannonHelperClass", "\345\212\250\351\207\217", nullptr));
        motionXLineEdit->setText(QString());
        motionXLabel->setText(QCoreApplication::translate("PearlCannonHelperClass", "X", nullptr));
        motionYLabel->setText(QCoreApplication::translate("PearlCannonHelperClass", "Y", nullptr));
        motionZLineEdit->setText(QString());
        motionYLineEdit->setText(QString());
        motionZLabel->setText(QCoreApplication::translate("PearlCannonHelperClass", "Z", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("PearlCannonHelperClass", "\351\231\220\345\210\266\346\235\241\344\273\266", nullptr));
        groundYLabel->setText(QCoreApplication::translate("PearlCannonHelperClass", "\345\234\260\351\235\242\351\253\230\345\272\246", nullptr));
        groundYLineEdit->setText(QCoreApplication::translate("PearlCannonHelperClass", "64", nullptr));
        maxTickLabel->setText(QCoreApplication::translate("PearlCannonHelperClass", "\346\234\200\345\244\247\350\277\255\344\273\243\345\210\273\346\225\260", nullptr));
        maxTickLineEdit->setText(QCoreApplication::translate("PearlCannonHelperClass", "1000", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("PearlCannonHelperClass", "\347\217\215\347\217\240\347\202\256\350\256\276\347\275\256", nullptr));
        amoutLabel2->setText(QCoreApplication::translate("PearlCannonHelperClass", "\346\267\261\347\201\260", nullptr));
        directionComboBox->setItemText(0, QCoreApplication::translate("PearlCannonHelperClass", "S (0)", nullptr));
        directionComboBox->setItemText(1, QCoreApplication::translate("PearlCannonHelperClass", "W (1)", nullptr));
        directionComboBox->setItemText(2, QCoreApplication::translate("PearlCannonHelperClass", "E (2)", nullptr));
        directionComboBox->setItemText(3, QCoreApplication::translate("PearlCannonHelperClass", "N (3)", nullptr));

        amoutLabel1->setText(QCoreApplication::translate("PearlCannonHelperClass", "\346\265\205\347\201\260", nullptr));
        isStartFromExplosionCheckBox->setText(QCoreApplication::translate("PearlCannonHelperClass", "\344\273\216\347\210\206\347\202\270\346\227\266\345\210\273\345\274\200\345\247\213", nullptr));
        label_6->setText(QCoreApplication::translate("PearlCannonHelperClass", "           \346\226\271\345\220\221", nullptr));
        displayMomentumCheckBox->setText(QCoreApplication::translate("PearlCannonHelperClass", "\346\230\276\347\244\272\347\217\215\347\217\240\345\212\250\351\207\217", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("PearlCannonHelperClass", "\350\275\250\350\277\271\346\250\241\346\213\237\345\231\250", nullptr));
        directionComboBox_2->setItemText(0, QCoreApplication::translate("PearlCannonHelperClass", "1.21.2-", nullptr));
        directionComboBox_2->setItemText(1, QCoreApplication::translate("PearlCannonHelperClass", "1.21.2+", nullptr));

#if QT_CONFIG(tooltip)
        pearlYMotion_2->setToolTip(QCoreApplication::translate("PearlCannonHelperClass", "The z coordinate of the aligned pearl", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        pearlYMotion_2->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        pearlYMotion_2->setText(QCoreApplication::translate("PearlCannonHelperClass", "\347\211\210\346\234\254", nullptr));
        CreditLabel->setText(QCoreApplication::translate("PearlCannonHelperClass", "Thanks Fallen_Breath", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PearlCannonHelperClass: public Ui_PearlCannonHelperClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PEARLCANNONHELPER_H
