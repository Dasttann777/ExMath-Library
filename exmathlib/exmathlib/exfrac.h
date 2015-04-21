#include <iostream>
using namespace std;
class Fraction
{
public:
	double numerator;
	double denominator;
	double ConvertToDouble(Fraction e);
	double ConvertToDouble();
	Fraction Add(Fraction a, Fraction b);
	Fraction(double, double);
	Fraction();
	friend ostream &operator<< (ostream& out, Fraction &v);
};
double Fraction::ConvertToDouble(Fraction e)
{
	return e.numerator / e.denominator;
}
double Fraction::ConvertToDouble()
{
	return (this->numerator) / (this->denominator);
}
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