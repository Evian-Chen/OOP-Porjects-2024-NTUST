/***********************************************************************
 * File: TS0403_main.cpp
 * Author: Evian Chen
 * Create Date: 2024-03-14
 * Editor: Evian
 * Update Date: 2024-03-14
 * Description: This program finds the GCD of integer a and b.
***********************************************************************/
#include <iostream>

int findGCD(int a, int b);  // recursive function

int main()
{
	// declare neseccary variables
	int a, b;

	// infinite loop until cin meets EOF
	while (std::cin >> a)
	{
		// get b
		std::cin >> b;

		// find GCD
		int ans = findGCD(std::max(a, b), std::min(a, b));

		// print out answer
		std::cout << ans << std::endl;
	}
}

/**
 * Intent:  find the GCD of two input integer
 * Pre:     nothiing showed
 * Post:    return GCD
 * \param   a, an integer bigger than b
 * \param   b, an integer smaller than b
 * \return  GCD of a and b
 */
int findGCD(int a, int b)
{
	// base case
	if (a % b == 0)
	{
		return b;
	}
	else
	{
		// get remainder
		int temp = a % b;

		// update a b
		a = b;
		b = temp;

		// call itself
		return findGCD(a, b);
	}
}
