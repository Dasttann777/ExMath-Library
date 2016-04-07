#include "exfrac.h"
Fraction Fraction::Simplify(int e)
{
	Fraction f(0, 0);
	for (e; e != 0; e--) {
		int t = 0, b = 0;
		for (int i = RoundToINT(this->denominator) * RoundToINT(this->numerator); i > 1; i--) {
			if ((RoundToINT(this->denominator) % i == 0) && (RoundToINT(this->numerator) % i == 0)) {
				b = RoundToINT(this->denominator) / i;
				t = RoundToINT(this->numerator) / i;
			}
		}
		this->denominator = b;
		this->numerator = t;
		f.denominator = b;
		f.numerator = t;
	}
	return f;
}
Fraction Fraction::Simplify()
{
	Fraction f(0, 0);
	for (int l = 3; l != 0; l--) {
		int t = 0, b = 0;
		for (int i = RoundToINT(this->denominator) * RoundToINT(this->numerator); i > 1; i--) {
			if ((RoundToINT(this->denominator) % i == 0) && (RoundToINT(this->numerator) % i == 0)) {
				b = RoundToINT(this->denominator) / i;
				t = RoundToINT(this->numerator) / i;
			}
		}
		this->denominator = b;
		this->numerator = t;
		f.denominator = b;
		f.numerator = t;
	}
	return f;
}
Fraction Fraction::Simplify(Fraction &a)
{
	for (int l = 3; l != 0; l--) {
		int t, b;
		for (int i = RoundToINT(a.denominator) * RoundToINT(a.numerator); i > 1; i--) {
			if ((RoundToINT(a.denominator) % i == 0) && (RoundToINT(a.numerator) % i == 0)) {
				b = RoundToINT(a.denominator) / i;
				t = RoundToINT(a.numerator) / i;
			}
		}
		a.denominator = b;
		a.numerator = t;
	}
	return a;
}
Fraction Fraction::Simplify(Fraction &a, int l)
{
	for (l; l != 0; l--) {
		int t, b;
		for (int i = RoundToINT(a.denominator) * RoundToINT(a.numerator); i > 1; i--) {
			if ((RoundToINT(a.denominator) % i == 0) && (RoundToINT(a.numerator) % i == 0)) {
				b = RoundToINT(a.denominator) / i;
				t = RoundToINT(a.numerator) / i;
			}
		}
		a.denominator = b;
		a.numerator = t;
	}
	return a;
}
Fraction Fraction::Divide(Fraction a)
{
	Fraction v(a.denominator, a.numerator);
	v.numerator *= this->numerator;
	v.denominator *= this->denominator;
	return v;
}
Fraction Fraction::Multiply(Fraction a)
{
	Fraction v(a.numerator, a.denominator);
	v.numerator *= this->numerator;
	v.denominator *= this->denominator;
	return v;
}
Fraction Fraction::Subtract(Fraction a)
{
	Fraction *v = new Fraction((this->numerator * a.denominator) - (a.numerator * this->denominator),
		this->denominator * a.denominator);
	return *v;
}
Fraction Fraction::Add(Fraction a)
{
	Fraction *v = new Fraction((this->numerator * a.denominator) + a.numerator * this->denominator,
		this->denominator * a.denominator);
	return *v;
}
Fraction Fraction::Add(Fraction a, Fraction b)
{
	Fraction v(0, 0);
	v.numerator = a.numerator + b.numerator;
	return v;
}
double Fraction::toDouble()
{
	return (this->numerator) / (this->denominator);
}
double Fraction::toDouble(Fraction e)
{
	return e.numerator / e.denominator;
}
Fraction::Fraction(double n, double d)
{	
		numerator = n;
		denominator = d;
}
Fraction::Fraction()
{
	numerator = 1;
	denominator = 1;
}
std::ostream &operator<< (std::ostream& fout, Fraction &a)
{
	fout << a.numerator << "/" << a.denominator;
	return fout;
}
