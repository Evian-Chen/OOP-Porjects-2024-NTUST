/***********************************************************************
 * File: TS0303.cpp
 * Author: Evian Chen
 * Create Date: 2024-03-07
 * Editor: Evian
 * Update Date: 2024-03-07
 * Description: This program print out a double and character in required
 *				format.
***********************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

int main()
{
	// declare necessary variables
	std::string x;
	int m, n, chNum, count;
	char c;

	// infinite loop until cin meet eof
	while (std::cin >> x)
	{
		// get input
		std::cin >> m >> n >> c;

		// for caculating the amount of c to be printed
		chNum = m;

		// for decimal point
		if (n > 0)
		{
			chNum -= (n + 1);
		}
		
		// check if x has decimal point
		if (std::find(x.begin(), x.end(), '.') == x.end())
		{
			count = x.length();
		}
		else
		{
			count = (x.substr(0, x.find('.'))).length();
		}
		
		// caculating the amount of c to be printed
		chNum -= count;
		
		// print out c
		for (int i = 0; i < chNum; i++)
		{
			std::cout << c;
		}

		// print out the digit part
		int t = m - chNum;
		std::cout << x.substr(0, t);

		// print out the remaining part if necessary
		if ((x.length() + chNum) < m)
		{
			// check if there's decimal part
			if (std::find(x.begin(), x.end(), '.') == x.end())
			{
				std::cout << '.';
				t = m - chNum - x.length() - 1;
			}
			else
			{
				t = m - chNum - x.length();
			}
			
			// print 0 if necessary
			for (int i = 0; i < t; i++)
			{
				std::cout << '0';
			}
		}

		// new line
		std::cout << std::endl;
	}
}
