#pragma once
#include <iostream>
#include <vector>
class Math;
int RoundToINT(double);
using namespace std;
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

	double ConvertToDouble();
	double ConvertToDouble(Fraction);

	//Basic Arithmetic
	Fraction Divide(Fraction);
	Fraction Multiply(Fraction);
	Fraction Subtract(Fraction);
	Fraction Add(Fraction);
	Fraction Add(Fraction, Fraction);

	Fraction(double, double);
	Fraction();
	friend ostream &operator<< (ostream&, Fraction&);
};
