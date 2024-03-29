#include <iostream>
#include "Fraction.h"
using namespace std;

int main()
{
	Fraction f1, f2, f3;
	f1.setNumerator(1);
	f1.setDenominator(1);
	f1.getDouble();
	f1.outputReducedFraction();

	f2.setNumerator(20);
	f2.setDenominator(60);
	f2.getDouble();
	f2.outputReducedFraction();

	f3.setNumerator(29);
	f3.setDenominator(13);
	f3.getDouble();
	f3.outputReducedFraction();
	
	return 0;
}