#pragma once
#include <iostream>
#include <vector>
#include "exdefines.h"
int RoundToINT(double);
//! Fraction Class
/*!
  Manipulating and Simplifying Fractions
*/
class Fraction
{
public:
	double numerator; //! Fraction Numerator
	double denominator; //! Fraction Denominator
	std::vector<Fraction> _f; //! Vector for storing multiple Fractions
	//! Simplify fraction once, with option for recursion.
	/*!
	  Static Members can be called without preexisting object.
	*/
	Fraction Simplify();
	Fraction Simplify(Fraction&);
	Fraction Simplify(int);
	Fraction Simplify(Fraction&, int);
	//! @name typecasting to double
	//@{
	/*!
	  Done by dividing Numerator by Denominator
	  \n Static can be called without preexisting object.\n
	  ~~~{.cpp}
	  Fraction a(1,2);
	  //3 Ways of doing this:
	  std::cout << a.toDouble(); // Call toDouble() Function
	  std::cout << double(a); // Use overloaded double() operator
	  std::cout << D_(a); //processor defined form of above
	  ~~~
	*/
	double toDouble();
	static double toDouble(Fraction);
	operator double() { return (this->numerator / this->denominator); }
	//@}
	
	//! @name Arithmetic
	//@{
	/*!
	  Basic Manipulation of Fractions using
	  the Greatest Common Denominator (GCD) Method \n
	  ~~~{.cpp}
	  Fraction a(1,2);
	  Fraction b(1,2);
	  cout << a.Add(b);
	  cout << a.Subtract(b);
	  cout << a.Multiply(b);
	  cout << a.Divide(b);
	  cout << Fraction::Add(a, b);
	  //Other statics not implemented yet
	  ~~~
	*/
	Fraction Divide(Fraction);
	Fraction Multiply(Fraction);
	Fraction Subtract(Fraction);
	Fraction Add(Fraction);
	static Fraction Add(Fraction, Fraction);
	//@}
	Fraction(double, double); //! Numerator and Denominator
	Fraction();
	friend std::ostream &operator<< (std::ostream&, Fraction&);//! Outputs numerator/denominator
};
