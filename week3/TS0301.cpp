/***********************************************************************
 * File: TS0301.cpp
 * Author: Evian Chen
 * Create Date: 2024-03-07
 * Editor: Evian
 * Update Date: 2024-03-07
 * Description: This program asks user to enter numbers and list the them
 *				and how many times they have appered.
***********************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

int main()
{
	// declare necessary variables
	int count = 0, userInput;
	std::vector <int> numbers;
	std::map<int, int> numDict;

	// infinite loop until cin meets eof
	while (std::cin >> userInput)
	{
		// count user's input
		count++;

		// store every input number if the number hasn't appered yet
		if (std::find(numbers.begin(), numbers.end(), userInput) == numbers.end())
		{
			numbers.push_back(userInput);
		}

		// store the number and how many times it appears
		if (numDict.find(userInput) == numDict.end())
		{
			numDict[userInput] = 1;
		}
		else
		{
			numDict[userInput]++;
		}
	}

	// sort numbers in a descending order
	std::sort(numbers.begin(), numbers.end());

	// print out
	std::cout << "N\tcount" << std::endl;

	// print numbers and times
	for (int i = numbers.size() - 1; i >= 0; i--)
	{
		std::cout << numbers[i] << '\t' << numDict[numbers[i]] << std::endl;
	}
}
