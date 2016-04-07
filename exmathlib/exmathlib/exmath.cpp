#pragma once
#include "exmath.h"
#include "exfrac.h"
int RoundToINT(double e) { return (int)(e + 0.5); }
double Math::Multiply(std::initializer_list<double> e)
{
	double a = 1;
	std::initializer_list<double>::iterator it;
	for (it = e.begin(); it != e.end(); ++it) {
		a *= *it;
	}
	return a;
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
double Math::Add(std::initializer_list<double> e)
{
	double a = 0;
	std::initializer_list<double>::iterator it;
	for (it = e.begin(); it != e.end(); ++it) {
		a += *it;
	}
	return a;
}
Fraction Math::Add(std::initializer_list<Fraction> e) {
	Fraction a(0, 0);
	std::initializer_list<Fraction>::iterator it;
	for (it = e.begin(); it != e.end(); ++it) {
		a = a.Add(*it);
	}
	return a;
}
Fraction Math::Add(Fraction fx, Fraction fy)
{
	fx = fx.Add(fy);
	return fx;
}
double Math::Minus(std::initializer_list<double> e)
{
	double a = 0;
	std::initializer_list<double>::iterator it;
	for (it = e.begin(); it != e.end(); ++it) {
		a -= *it;
	}
	return a;
}
void Math::Restart()
{
	_x.clear();
}
void Math::Append(std::initializer_list<double> e)
{
	std::initializer_list<double>::iterator it;
	for (it = e.begin(); it != e.end(); ++it) {
		_x.push_back(*it);
	}
}
Math::Math(std::initializer_list<double> e)
{
	std::initializer_list<double>::iterator it;
	for (it = e.begin(); it != e.end(); ++it) {
		_x.push_back(*it);
	}
}
Math::Math(std::vector<double> e)
{
	_x = e;
}
Math& operator+=(Math &obj, double p)
{
	obj._x.push_back(p);
	return obj;
}
std::vector<double> Math::anti_diff(std::vector<double> e)
{
	double s = e.size() - 1;
	for (std::vector<double>::iterator i = e.begin(); i != e.end(); ++i) {
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
std::vector<double> Math::diff(std::vector<double> e)
{
	double s = e.size() - 1;
	for (std::vector<double>::iterator i = e.begin(); i != e.end(); ++i) {
		(*i) /= s;
		s--;
	}
	return e;
}
std::vector<double> Math::diff(double x2, double x1, double c)
{
	std::vector<double> a(0);
	a.push_back(x2 / 2);
	a.push_back(x1 / 1);
	return a;
}
std::vector<double> Math::diff(double x3, double x2, double x1, double c)
{
	std::vector<double> a(0);
	a.push_back(x3 / 3);
	a.push_back(x2 / 2);
	a.push_back(x1 / 1);
	return a;
}
template<typename T>
std::ostream& operator<< (std::ostream& out, const std::vector<T>& v) {
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
std::vector<double> sqrt_all(std::vector<double> e)
{
	double s = e.size() - 1;
	for (std::vector<double>::iterator i = e.begin(); i != e.end(); ++i) {
		*i = sqrt(*i);
	}
	return e;
}
double square(double e)
{
	return e*e;
}
std::vector<double> square_all(std::vector<double> e)
{
	double s = e.size() - 1;
	for (std::vector<double>::iterator i = e.begin(); i != e.end(); ++i) {
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
