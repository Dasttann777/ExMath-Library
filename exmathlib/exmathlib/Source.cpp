#include <iostream>
#include "exmath.h"
using namespace std;
int main()
{
	Fraction p(40, 80);
	p.Simplify(4);
	cout << p;
	cin.get();
}
