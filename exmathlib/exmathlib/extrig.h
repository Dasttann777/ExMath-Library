#pragma once
#include <cmath>
#include "exdefines.h"
enum angtype {
	Deg,
	Rad
};
class Angle;
class Trig
{
public:
	Trig();
	Trig(double, double, double);
	virtual ~Trig();
public:
	//sides x and y, and hypotenuse c
	double _x, _y, _c;

	//find x, y or c
	double find_c() { _c = sqrt((_x*_x) + (_y*_y)); }	
	double find_x() { _y = sqrt((_c*_c) - (_y*_y)); }	
	double find_y() { _y = sqrt((_c*_c) - (_x*_x)); }
	void find_y(Angle);
	void find_x(Angle);
	void find_c(Angle);
	static double find_y(double c, Angle);
	static double find_x(double c, Angle);
	static double find_c(double y, Angle);
	static double find_y(double c, double x);
	static double find_x(double c, double y);
	static double find_c(double x, double y);
	
};
class Angle {
public:
	Angle(double d);
	Angle(double, angtype);
	double _angle;
	angtype _type;
	//Degrees <-> Radians Conversion
	double _toDegrees() { _angle = (_angle * (180 / PI)); }
	double _toRadians() { _angle = (_angle * (PI / 180)); }
	static double _toDegrees(double);
	static double _toRadians(double);
};