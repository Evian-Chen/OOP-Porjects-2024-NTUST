#ifndef Fraction_H
#define Fraction_H
#include <iostream>
#include <iomanip>
using namespace std;

class Fraction
{
private:
	int numerator;
	int denominator;
public:
	void setNumerator(int nu);
	void setDenominator(int de);

	// print out the fraction of a and b in numeric format
	void getDouble();

	// print out the fraction of a and b in "nu/de"
	void outputReducedFraction();

	// get GCD of a and b
	int getGCD(int a, int b);
};

#endif //Fraction_H