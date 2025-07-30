#pragma once
#include <QString>
#include "vec3d.h"

class Setting
{
public:
	// litematica rotation
	static int rotation;

	Setting();
	Setting(int, int, int, int);
	Setting(QString);
	~Setting();
	QString toString();
	vec3d getThrustFromVec(const vec3d& baseThrust) const;

	int amount_l, amount_r, direction, pitch;
};

