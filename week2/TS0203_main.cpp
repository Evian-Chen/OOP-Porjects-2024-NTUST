/***********************************************************************
 * File: TS0203_main.cpp
 * Author: Evian Chen
 * Create Date: 2024-03-03
 * Editor: Evian
 * Update Date: 2024-03-03
 * Description: This program make the input string into a n*n square.
***********************************************************************/
#include <iostream>
#include <string>
#include <vector>

int main()
{
	// declare necessary variables
	std::string str;
	int square = 0;

	// infinite loop until cin meets EOF
	while (std::cin >> str)
	{
		// find the lenth of user input
		int len = str.length();

		// find the closest perfect square
		for (int i = 1; i < len + 1; i++)
		{
			// check if i is the perfect square
			if (len <= i * i)
			{
				square = i;
				break;
			}
		}

		// declare a vector of vectors to store characters
		std::vector<std::vector<char>> squareStr(square, std::vector<char>(square));

		// use strIndex to get character from user input sequentially
		int strIndex = 0;

		// fill the vector using nested for loop, i is row of the vector
		for (int i = 0; i < square; i++)
		{
			// j is column of the vector
			for (int j = 0; j < square; j++)
			{
				// check if there's still un-used character in user input
				if (strIndex < len)
				{
					// add character to the vector
					squareStr[j][i] = str[strIndex];
					strIndex++;
				}
				else
				{
					// if there's no more character in user input, then add space instead
					squareStr[j][i] = ' ';
				}
			}
		}

		// print out vector using nested for loop, i is row of the vector
		for (int i = 0; i < square; i++)
		{
			// j is column of the vector
			for (int j = 0; j < square; j++)
			{
				// print character except for spaces
				if (squareStr[i][j] != ' ')
				{
					std::cout << squareStr[i][j];
				}
			}

			// new line
			std::cout << std::endl;
		}
		
		// clear for the next input
		squareStr.clear();
	}
}
