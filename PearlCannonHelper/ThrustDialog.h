#pragma once

#include <QDialog>
#include <QLineEdit>
#include <vec3d.h>

// 四组 TNT 动量设置对话框（西北/东北/西南/东南）
class ThrustDialog : public QDialog
{
	Q_OBJECT

public:
	// 顺序：0=西北, 1=东北, 2=西南, 3=东南
	ThrustDialog(vec3d thrusts[4], QWidget *parent = nullptr);

	// 获取用户填写的 4 组动量（写入调用者的数组）
	void getValues(vec3d out[4]) const;

private:
	QLineEdit *m_edit[4][3]; // [组][xyz]
};
