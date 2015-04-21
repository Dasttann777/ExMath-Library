#include <iostream>
using namespace std;
class Fraction
{
public:
	double numerator;
	double denominator;
	Fraction Add(Fraction a, Fraction b);
	Fraction(double, double);
	Fraction();
	friend ostream &operator<< (ostream& out, Fraction &v);
};
Fraction::Fraction(double n, double d)
{
	numerator = n;
	denominator = d;
}
ostream &operator<< (ostream& fout, Fraction &a)
{
	fout << a.numerator << "/" << a.denominator;
	return fout;
}