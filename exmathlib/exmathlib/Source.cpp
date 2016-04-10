#include "exmath.h"
using namespace std;
int main()
{
	Fraction a(1, 2);
	cout << Fraction::Add(a, Fraction(1, 2));
	cin.get();
}