#pragma once
#include <cmath>
#include "exdefines.h"
class Trig
{
public:
	Trig();
	Trig(double, double, double);
	virtual ~Trig();
public:
	double _x, _y, _c;
	double findHypotenuse() { return sqrt((_x*_x) + (_y*_y)); }
	static double findHypotenuse(double, double);
	double find_x() { return sqrt((_c*_c) - (_y*_y)); }
	double find_x(double, double);
	double find_y() { return sqrt((_c*_c) - (_x*_x)); }
	double find_y(double, double);
	static double _toDegrees(double);
	static double _toRadians(double);
};
