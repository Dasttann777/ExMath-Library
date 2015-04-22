#ifndef INCLPROT
#define INCLPROT
#include <cmath>
#include <vector>
#include "exfrac.h"
using namespace std;
Fraction square(Fraction);
vector<double> sqrt_all(vector<double>);
double cubert(double);
double xroot(double, double);
int RoundToINT(double e) { return (int)(e + 0.5); }
class Math
{
public:
	friend class Fraction;
	vector<double> _x;
	friend ostream& operator<< (ostream& out, Math &v);
	//Trigonometry
	double hypotenuse(double, double);
	//Add/Subtract/Multiply/Divide
	//->
	double Multiply(initializer_list<double>);
	double add_Array(double[]);
	double minus_Array(double[]);
	double Add(initializer_list<double>);
	Fraction Add(Fraction, Fraction);
	double Minus(initializer_list<double>);
	//Math
	void Restart();
	void Append(initializer_list<double> e);
	Math(initializer_list<double> e);
	Math(vector<double> e);
	Math() {}
	Math& operator+= (Math &obj);
	//Calculus
	vector<double> anti_diff(vector<double>);
	double diff(double, double);
	vector<double> diff(vector<double> e);
	vector<double> diff(double, double, double);
	vector<double> diff(double, double, double, double);
};
double Math::hypotenuse(double l, double w)
{
	double temp = sqrt((l*l) + (w*w));
	return temp;
}
double Multiply(initializer_list<double> e)
{
	double a = 1;
	initializer_list<double>::iterator it;
	for (it = e.begin(); it != e.end(); ++it) {
		a *= *it;
	}
	return a;
}
ostream& operator<< (ostream& out, Math &v)
{
	out << "y=";
	size_t last = v._x.size() - 1;
	int p = v._x.size();
	for (size_t i = 0; i < v._x.size(); ++i) {
		out << v._x[i];
		if (i != last) {
			out << "x^" << p << " + ";
		}
		p--;
	}
	return out;
}
Fraction Math::Add(Fraction a, Fraction b)
{
	Fraction c(0, 0);
	a.Simplify();
	b.Simplify();
	a.numerator *= b.denominator;
	a.denominator *= b.denominator;
	b.numerator *= a.denominator;
	b.denominator *= a.denominator;
	c.numerator = a.numerator + b.numerator;
	c.denominator = a.denominator;
	c.Simplify();
	return c;
}
double Math::add_Array(double e[])
{
	double a = 0;
	for (int i = 0; i != sizeof(e); i++) {
		a += e[i];
	}
	return a;
}
double Math::minus_Array(double e[])
{
	double a = 0;
	for (int i = 0; i != sizeof(e); i++) {
		a -= e[i];
	}
	return a;
}
double Math::Add(initializer_list<double> e)
{
	double a = 0;
	initializer_list<double>::iterator it;
	for (it = e.begin(); it != e.end(); ++it) {
		a += *it;
	}
	return a;
}
double Math::Minus(initializer_list<double> e)
{
	double a = 0;
	initializer_list<double>::iterator it;
	for (it = e.begin(); it != e.end(); ++it) {
		a -= *it;
	}
	return a;
}
void Math::Restart()
{
	_x.clear();
}
void Math::Append(initializer_list<double> e)
{
	initializer_list<double>::iterator it;
	for (it = e.begin(); it != e.end(); ++it) {
		_x.push_back(*it);
	}
}
Math::Math(initializer_list<double> e)
{
	initializer_list<double>::iterator it;
	for (it = e.begin(); it != e.end(); ++it) {
		_x.push_back(*it);
	}
}
Math::Math(vector<double> e)
{
	_x = e;
}
Math& operator+=(Math &obj, double p)
{
	obj._x.push_back(p);
	return obj;
}
vector<double> Math::anti_diff(vector<double> e)
{
	double s = e.size() - 1;
	for (vector<double>::iterator i = e.begin(); i != e.end(); ++i) {
		(*i) /= s;
		(*i) *= s;
		s--;
	}
	return e;
}
double Math::diff(double x1, double c)
{
	return x1;
}
vector<double> Math::diff(vector<double> e)
{
	double s = e.size() - 1;
	for (vector<double>::iterator i = e.begin(); i != e.end(); ++i) {
		(*i) /= s;
		s--;
	}
	return e;
}
vector<double> Math::diff(double x2, double x1, double c)
{
	vector<double> a(0);
	a.push_back(x2 / 2);
	a.push_back(x1 / 1);
	return a;
}
vector<double> Math::diff(double x3, double x2, double x1, double c)
{
	vector<double> a(0);
	a.push_back(x3 / 3);
	a.push_back(x2 / 2);
	a.push_back(x1 / 1);
	return a;
}
template<typename T>
ostream& operator<< (ostream& out, const vector<T>& v) {
	out << "[";
	size_t last = v.size() - 1;
	for (size_t i = 0; i < v.size(); ++i) {
		out << v[i];
		if (i != last)
			out << ", ";
	}
	out << "]";
	return out;
}
vector<double> sqrt_all(vector<double> e)
{
	double s = e.size() - 1;
	for (vector<double>::iterator i = e.begin(); i != e.end(); ++i) {
		*i = sqrt(*i);
	}
	return e;
}
double square(double e)
{
	return e*e;
}
Fraction square(Fraction e)
{
	e.numerator *= e.numerator;
	e.denominator *= e.denominator;
	return e;
}
vector<double> square_all(vector<double> e)
{
	double s = e.size() - 1;
	for (vector<double>::iterator i = e.begin(); i != e.end(); ++i) {
		(*i) *= (*i);
	}
	return e;
}
double cubert(double e)
{
	return pow(e, 1 / 3.);
}
double xroot(double e, double n)
{
	return pow(e, 1 / n);
}
#endif
