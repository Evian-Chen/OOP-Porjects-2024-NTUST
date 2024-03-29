#include "Fraction.h"
#include <iostream>

void Fraction::setNumerator(int nu)
{
	this->numerator = nu;
}

void Fraction::setDenominator(int de)
{
	this->denominator = de;
}

// print out the fraction of a and b in numeric format
void Fraction::getDouble()
{
	// numerator is 0
	if (this->numerator == 0)
	{
		std::cout << '0' << std::endl;
	}
	else
	{
		// output integer
		if (this->numerator % this->denominator == 0)
		{
			int ans = this->numerator / this->denominator;
			std::cout << ans << std::endl;
		}
		else
		{
			// get double
			double ans = ((double)this->numerator) / ((double)this->denominator);

			// print double to the 6th digit
			std::cout << std::fixed << std::setprecision(6) << ans << std::endl;
		}
	}
}

// print out the fraction of a and b in "nu/de"
void Fraction::outputReducedFraction()
{
	// numerator is 0
	if (this->numerator == 0)
	{
		std::cout << "0" << std::endl;
	}
	else
	{
		// get GCD
		int gcd = getGCD(std::max(this->denominator, this->numerator), std::min(this->denominator, this->numerator));
		
		// nu/de is integer
		if (this->denominator / gcd == 1)
		{
			std::cout << this->numerator / gcd << std::endl;
		}
		else
		{
			// nu/de is not integer
			std::cout << this->numerator / gcd << '/' << this->denominator / gcd << std::endl;
		}
	}
}

// get GCD of a and b
int Fraction::getGCD(int a, int b)
{
	// base case
	if (a % b == 0)
	{
		return b;
	}
	else
	{
		// resursion
		return getGCD(b, a % b);
	}
}



