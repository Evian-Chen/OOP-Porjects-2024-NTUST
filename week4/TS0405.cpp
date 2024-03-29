/***********************************************************************
 * File: TS0405.cpp
 * Author: Evian Chen
 * Create Date: 2024-03-14
 * Editor: Evian
 * Update Date: 2024-03-14
 * Description: Describe the program.
***********************************************************************/
#include <iostream>

int stepCount(int n, int count);  // caculate how many step to reach 1 recursively

int main()
{
	// declare necessary variables
	int a, b, temp, maxiCount = 0;

	// infinite loop until cin meets EOF
	while (std::cin >> a)
	{
		// get b
		std::cin >> b;

		// loop through all numbers between a and b
		for (int i = std::min(a, b); i < std::max(a, b) + 1; i++)
		{
			// get step
			temp = stepCount(i, 0);

			// check if temp is the max
			if (temp > maxiCount)
			{
				maxiCount = temp;
			}
		}

		// print out answer
		std::cout << a << ' ' << b << ' ' << maxiCount + 1 << std::endl;

		// initialize for new round
		maxiCount = 0;
	}
}

/**
 * Intent:  find the steps to reach 1
 * Pre:     nothing showed
 * Post:    return steps
 * \param   n, an integer to be caculated
 * \param   count, an integer representing current step
 * \return  count
 */
int stepCount(int n, int count)
{
	// base case
	if (n == 1)
	{
		return count;
	}
	else
	{
		// add count
		count++;
		if (n % 2 == 0)
		{
			// even number, n = n/2
			return stepCount(n / 2, count);
		}
		else
		{
			// odd number, n = 3*n+1
			return stepCount(3 * n + 1, count);
		}
	}
}
