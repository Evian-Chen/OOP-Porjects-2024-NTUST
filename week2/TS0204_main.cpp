/***********************************************************************
 * File: TS0204_main.cpp
 * Author: Evian
 * Create Date: 2024/02/29
 * Editor: Evian
 * Update Date: 2024/02/29
 * Description: This program stores emplyee's information and print them out.
***********************************************************************/
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>     // for storing data
#include <algorithm>  // for sorting vectors

int main()
{
	// declare necessary variable
	int n;

	// infinite loop until cin meets EOF
	while (std::cin >> n)
	{
		// declare vectors to store name, salary and bonus
		std::vector<std::string> names;
		std::vector<int> salary, bonus;

		// declare necessary variables
		std::string name;
		int s, b;

		// get n employee's info
		for (int i = 0; i < n; i++)
		{
			// get data
			std::cin >> name >> s >> b;

			// add data to vectors
			names.push_back(name);
			salary.push_back(s);
			bonus.push_back(b);
		}

		// find the longest elements in salary and bonus
		int maxSalary = std::to_string(*max_element(salary.begin(), salary.end())).length();
		int maxBonus = std::to_string(*max_element(bonus.begin(), bonus.end())).length();

		// declare an iterater of names to store the longest name
		auto maxNameLenIt = max_element(names.begin(), names.end(),

			// using lambda function to find the longest string in names
			[](const std::string& a, const std::string& b)
			{
				return a.length() < b.length();
			}
		);

		// get the length of the longest name
		int maxNameLen = (*maxNameLenIt).length();
		
		// print out all data
		for (int i = 0; i < n; i++)
		{
			std::cout << std::setw(maxNameLen) << names[i] << "|  " 
				      << std::setw(maxSalary) << salary[i] << "|  " 
				      << std::setw(maxBonus) << bonus[i] << std::endl;
		}
	}
}
