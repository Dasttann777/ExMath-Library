#pragma once
#include <iostream>
#include <vector>
#include "exdefines.h"
int RoundToINT(double);
class Fraction
{
public:
	double numerator;
	double denominator;
	std::vector<Fraction> _f;

	Fraction Simplify();
	Fraction Simplify(Fraction&);
	Fraction Simplify(int);
	Fraction Simplify(Fraction&, int);

	double toDouble();
	double toDouble(Fraction);
	operator double() { return (this->numerator / this->denominator); }
	//Basic Arithmetic
	Fraction Divide(Fraction);
	Fraction Multiply(Fraction);
	Fraction Subtract(Fraction);
	Fraction Add(Fraction);
	Fraction Add(Fraction, Fraction);

	Fraction(double, double);
	Fraction();
	friend std::ostream &operator<< (std::ostream&, Fraction&);
};
