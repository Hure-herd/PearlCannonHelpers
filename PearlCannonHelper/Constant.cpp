#include "Constant.h"


const QString Constant::iniFileName = "./PearlCannonHelper.ini";
// for left size (light gray)
// rotation direction xyz
const double Constant::sign_l[4][4][3] = {
	// Rotation: None
	{
		{+1, 1, +1}, // 00
		{-1, 1, -1}, // 01
		{+1, 1, -1}, // 10
		{+1, 1, -1}  // 11
	},
	// Rotation: CW_90
	{
		{-1, 1, +1}, // 00
		{+1, 1, -1}, // 01
		{+1, 1, +1}, // 10
		{+1, 1, +1}  // 11
	},
	// Rotation: CW_180
	{
		{-1, 1, -1}, // 00
		{+1, 1, +1}, // 01
		{-1, 1, +1}, // 10
		{-1, 1, +1}  // 11
	},
	// Rotation: CCW_90
	{
		{+1, 1, -1}, // 00
		{-1, 1, +1}, // 01
		{-1, 1, -1}, // 10
		{-1, 1, -1}  // 11
	}
};

// for left size (dark gray)
// rotation direction xyz
const double Constant::sign_r[4][4][3] = {
	// Rotation: None
	{
		{-1, 1, +1}, // 00
		{-1, 1, +1}, // 01
		{+1, 1, +1}, // 10
		{-1, 1, -1}  // 11
	},
	// Rotation: CW_90
	{
		{-1, 1, -1}, // 00
		{-1, 1, -1}, // 01
		{-1, 1, +1}, // 10
		{+1, 1, -1}  // 11
	},
	// Rotation: CW_180
	{
		{+1, 1, -1}, // 00
		{+1, 1, -1}, // 01
		{-1, 1, -1}, // 10
		{+1, 1, +1}  // 11
	},
	// Rotation: CCW_90
	{
		{+1, 1, +1}, // 00
		{+1, 1, +1}, // 01
		{+1, 1, -1}, // 10
		{-1, 1, +1}  // 11
	}
};
