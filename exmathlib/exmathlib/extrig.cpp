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
double Trig::find_c(double x, double y)
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
void Trig::find_y(Angle a)
{
	_y = _c * sin(a._angle);
}
void Trig::find_x(Angle a)
{
	_x = _c *  cos(a._angle);
}
void Trig::find_c(Angle a)
{
	_c = _y / sin(a._angle);
}

double Trig::find_y(double c, Angle a)
{
	return (c * sin(a._angle));
}

double Trig::find_x(double c, Angle a)
{
	return c *  cos(a._angle);
}
double Trig::find_c(double y, Angle a)
{
	return y / sin(a._angle);
}
Angle::Angle(double d)
{
	_angle = d;
	_type = angtype::Deg;
}
Angle::Angle(double d, angtype type)
{
	_angle = d;
	_type = type;
}
//Degrees <-> Radians Conversion
double Angle::_toDegrees(double radians)
{
	return (radians * (180 / PI));
}
double Angle::_toRadians(double degrees)
{
	return (degrees * (PI / 180));
}