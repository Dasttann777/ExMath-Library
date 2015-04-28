#pragma once
#include <vector>
#include <iostream>

class Math
{
public:
	friend class Fraction;
	std::vector<double> _x;
	//Trigonometry
	double hypotenuse(double, double);
	//Add/Subtract/Multiply/Divide
	//->
	double Multiply(std::initializer_list<double>);
	double add_Array(double[]);
	double minus_Array(double[]);
	double Add(std::initializer_list<double>);
	Fraction Add(Fraction, Fraction);
	double Minus(std::initializer_list<double>);
	//Math
	void Restart();
	void Append(std::initializer_list<double> e);
	Math(std::initializer_list<double> e);
	Math(std::vector<double> e);
	Math() {}
	Math& operator+= (Math &obj);
	//Calculus
	std::vector<double> anti_diff(std::vector<double>);
	double diff(double, double);
	std::vector<double> diff(std::vector<double> e);
	std::vector<double> diff(double, double, double);
	std::vector<double> diff(double, double, double, double);
};

std::ostream& operator<< (std::ostream& out, Math &v);

std::vector<double> sqrt_all(std::vector<double>);
double cubert(double);
double xroot(double, double);
int RoundToINT(double e);