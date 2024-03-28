/***********************************************************************
 * File: TS0201.cpp
 * Author: Evian Chen
 * Create Date: 2024-03-01
 * Editor: Evian
 * Update Date: 2024-03-01
 * Description: This program caculate the average and standard deviation
 *				of all input scores.
***********************************************************************/
#include <iostream>
#include <iomanip>
#include <vector>
#include <numeric>
#include <cmath>

int main()
{
	// declare necessary variables
	std::vector<double> scores;
	int n;
	double avg = 0.0, sd = 0.0, total = 0.0, score;

	// infinite loop until cin meets EOF
	while (std::cin >> n)
	{
		// get n scores
		for (int i = 0; i < n; i++)
		{
			// get score and add it to the vecter
			std::cin >> score;
			scores.push_back(score);
		}

		// caculate total and average
		total = std::accumulate(scores.begin(), scores.end(), 0.0);
		avg = total / n;
		
		// declare a total for caculating standard deviation
		double sdTotal = 0.0;
		
		// loop through scores and add them using the formula
		for (int i = 0; i < n; i++)
		{
			sdTotal += pow((scores[i] - avg), 2);
		}

		// caculate standard drviation
		sd = sqrt(sdTotal / n);

		// print out the result
		std::cout << "Average:" << avg << '\t' << "Standard deviation:" << sd << std::endl;
		
		// initialize the vecter
		scores.clear();
	}
}
