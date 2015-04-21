#ifndef INCLPROT
#define INCLPROT
#include <cmath>
#include <vector>
#include "exfrac.h"
using namespace std;
Fraction square(Fraction e);
class Math
{
public:
	vector<double> _x;
	friend ostream& operator<< (ostream& out, Math &v);
	//Add/Subtract
	double add_Array(double e[]);
	double minus_Array(double e[]);
	double Add(initializer_list<double> e);
	Fraction Add(Fraction a, Fraction b);
	double Minus(initializer_list<double> e);
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
	c.numerator = a.numerator + b.numerator;
	c.denominator = a.denominator + b.numerator;
	return c;
}
double Math::add_Array(double e[])
{
	double a=0;
	for (int i = 0; i != sizeof(e); i++) {
		a += e[i];
	}
	return a;
}
double Math::minus_Array(double e[])
{
	double a=0;
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
#endif
