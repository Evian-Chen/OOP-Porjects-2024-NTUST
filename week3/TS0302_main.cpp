/***********************************************************************
 * File: TS0302_main.cpp
 * Author: Evian Chen
 * Create Date: 2024-03-07
 * Editor: Evian
 * Update Date: 2024-03-07
 * Description: This program reads scores and print them out.
***********************************************************************/
#include <iostream>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <map>
#include <string>

int main()
{
	// declare necessary variables
	std::map<int, int> gradeDict = { {'0', 0},
									 {'1', 0},
									 {'2', 0},
									 {'3', 0},
									 {'4', 0},
									 {'5', 0}};
	std::string line, file = "grade.txt";
	std::ifstream f;

	// open file
	f.open(file);

	// ready read file
	if (f.is_open())
	{
		// read file line by line
		while (std::getline(f, line))
		{
			// read character by character
			for (char ch : line)
			{
				// if ch is not a space,then it's a number
				if (ch != ' ')
				{
					gradeDict[ch]++;
				}
			}
		}
	}

	// close file
	f.close();
	
	// ready for write file
	std::ofstream myfile;

	// open file
	myfile.open("grades.Output");

	// write in file
	for (int i = 48; i < 54; i++)
	{
		myfile << gradeDict[char(i)] << " grade(s) of " << i - 48 << std::endl;
	}

	// close file
	myfile.close();
}

