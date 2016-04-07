#pragma once
#include <cmath>
#include "exdefines.h"
//! Enum needed for Angle Class
enum angtype {
	Deg,
	Rad
};
class Angle;
class Trig
{
public:
	Trig(); //! Empty Trig Object
	Trig(double, double, double); //! Create Object with sides defined.
	virtual ~Trig();
public:
	//! sides _x and _y, and hypotenuse _c
	double _x, _y, _c;

	//! find x, y or c
	//@{
	/*!
	  Find Missing Side knowing other two side lengths.
	  ~~~{.cpp}
	  Trig t( 3, 4, 5);
	  t.find_c();
	  t.find_y();
	  t.find_x();
	  ~~~
	*/
	double find_c() { _c = sqrt((_x*_x) + (_y*_y)); }	
	double find_x() { _y = sqrt((_c*_c) - (_y*_y)); }	
	double find_y() { _y = sqrt((_c*_c) - (_x*_x)); }
	//@}
	void find_y(Angle); //! Find side _y, _c must be known!
	void find_x(Angle); //! Find side _x, _c must be known!
	void find_c(Angle); //! Find side _c, _y must be known!
	//! Static Members for finding Sides
	//@{
	/*!
	  ~~~{.cpp}
	  cout << Trig::find_c(5, Angle(35));
	  cout << T_::find_c(5, A_(35)); //Same as above.
	  ~~~
	*/
	static double find_y(double c, Angle);
	static double find_x(double c, Angle);
	static double find_c(double y, Angle);
	static double find_y(double c, double x);
	static double find_x(double c, double y);
	static double find_c(double x, double y);
	//@}
};

//! Basic Angle Class
/*!
  Needed for defining Angle amount and which mode it is in.
  \n 
  The enum angtype is used here, but if not explicitly defined, is set to Degrees;
*/
class Angle {
public:
	Angle(double d); //! Defaults to degrees
	Angle(double, angtype); //! Current Angle Types are Deg and Rad
	double _angle;
	angtype _type;
	void _toDegrees() { _angle = (_angle * (180 / PI)); } //! Degrees <-> Radians Conversion
	void _toRadians() { _angle = (_angle * (PI / 180)); } //! Degrees <-> Radians Conversion
	static double _toDegrees(double); //! Degrees <-> Radians Conversion
	static double _toRadians(double); //! Degrees <-> Radians Conversion
};