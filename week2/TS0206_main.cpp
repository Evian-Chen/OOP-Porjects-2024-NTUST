/***********************************************************************
 * File: TS0206_main.cpp
 * Author: Evian Chen
 * Create Date: 2024-03-01
 * Editor: Evian
 * Update Date: 2024-03-01
 * Description: This program caculates the tax of user's input income.
***********************************************************************/
#include <iostream>
#include <iomanip>

void caculateTax(double m);  // for caculating the tax

int main()
{
	// declare necessary variables
	double income = 0.0;

	// infinite loop until cin meets EOF
	while (std::cin >> income)
	{
		// caculate the tax and print out the result
		caculateTax(income);
	}
}

/**
 * Intent:  caculate the tax of input m and print out the result
 * Pre:     nothing showed
 * Post:    print out the tax
 * \param   m: a double number that represents the input income
 */
void caculateTax(double m)
{
	// caculating the tax and print out 
	if (m < 750)
	{
		std::cout << std::fixed << std::setprecision(2) << m * 0.01 << std::endl;
	}
	else if (m < 2250)
	{
		std::cout << std::fixed << std::setprecision(2) << (m - 750) * 0.02 + 7.50 << std::endl;
	}
	else if (m < 3750)
	{
		std::cout << std::fixed << std::setprecision(2) << (m - 2250) * 0.03 + 37.50 << std::endl;
	}
	else if (m < 5250)
	{
		std::cout << std::fixed << std::setprecision(2) << (m - 3750) * 0.04 + 82.50 << std::endl;
	}
	else if (m < 7000)
	{
		std::cout << std::fixed << std::setprecision(2) << (m - 5250) * 0.05 + 142.50 << std::endl;
	}
	else
	{
		std::cout << std::fixed << std::setprecision(2) << (m - 7000) * 0.06 + 230.00 << std::endl;
	}
}
