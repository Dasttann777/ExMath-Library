#include <iostream>
#include "exmath.h"
using namespace std;
int main()
{
	Fraction f(1, 2);
	cout << square(f).ConvertToDouble();
	cin.get();
}
