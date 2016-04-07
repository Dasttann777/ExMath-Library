#pragma once
#include <vector>
#include <iostream>
#include "exfrac.h"
#include "extrig.h"
#include "exdefines.h"
class Math
{
public:
	friend class Fraction;
	friend class Trig;
	std::vector<double> _x;	
	//Add/Subtract/Multiply/Divide
	//->
	double Multiply(std::initializer_list<double> e);
	double add_Array(double[]);
	double minus_Array(double[]);
	double Add(std::initializer_list<double>);
	double Add(double _1, double _2) { return _1 + _2; }
	Fraction Add(std::initializer_list <Fraction>);
	Fraction Add(Fraction fx, Fraction fy);
	double Minus(std::initializer_list<double>);
	//Math
	void Restart();
	void Append(std::initializer_list<double> e);
	Math(std::initializer_list<double> e);
	Math(std::vector<double> e);
	Math() {}
	//Calculus
	std::vector<double> anti_diff(std::vector<double>);
	double diff(double, double);
	std::vector<double> diff(std::vector<double> e);
	std::vector<double> diff(double, double, double);
	std::vector<double> diff(double, double, double, double);
};


std::vector<double> sqrt_all(std::vector<double>);
double cubert(double);
double xroot(double, double);
int RoundToINT(double e);