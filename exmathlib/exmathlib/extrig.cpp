#pragma once
#include "extrig.h"

Trig::Trig()
{
}
Trig::~Trig()
{
}
Trig::Trig(double x, double y, double c) {
	_x = x;
	_y = y;
	_c = c;
}
double Trig::findHypotenuse(double x, double y)
{
	return sqrt((x*x) + (y*y));
}
double Trig::find_x(double c, double y)
{
	return sqrt((c*c) - (y*y));
}
double Trig::find_y(double c, double x)
{
	return sqrt((c*c) - (x*x));
}
double Trig::_toDegrees(double radians)
{
	return (radians * (180 / PI));
}
double Trig::_toRadians(double degrees)
{
	return (degrees * (PI / 180));
}
