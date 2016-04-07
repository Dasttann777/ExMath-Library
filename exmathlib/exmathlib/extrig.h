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
	double find_x() { return sqrt((_c*_c) - (_y*_y)); }
	double find_y() { return sqrt((_c*_c) - (_x*_x)); }
};
