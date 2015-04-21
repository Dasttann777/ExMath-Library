class Fraction
{
public:
	double numerator;
	double denominator;
	Fraction Add(Fraction a, Fraction b);
	Fraction(double, double);
};
Fraction Fraction::Add(Fraction a, Fraction b)
{
	Fraction c;
	c.numerator = a.numerator + b.numerator;
	c.denominator = a.denominator + b.numerator;
	return c;
}
Fraction::Fraction(double n, double d)
{
	numerator = n;
	denominator = d;
}
