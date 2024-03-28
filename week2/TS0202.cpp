/***********************************************************************
 * File: TS0202.cpp
 * Author: Evian Chen
 * Create Date: 2024-03-03
 * Editor: Evian
 * Update Date: 2024-03-03
 * Description: This program reads a file and output the names and
 *				scores of top three players.
***********************************************************************/
#include <iostream>
#include <fstream>    //for file reading
#include <vector>
#include <string>
#include <algorithm>  // for finding max element

void printFinal(std::vector<std::string> names, std::vector<int> scores);  // print out final result

int main()
{
    // declare necessary variables
    std::vector<std::string> names;
    std::vector<int> scores;
    std::string line, filename = "scores.txt";
    std::ifstream f;

    // open file
    f.open(filename);

    // check if file is avaliable
    if (f.is_open())
    {
        // because name and score are seperated by a NEW LINE, which CANNOT be known from the description,
        // use getline to read file line by line
        while (std::getline(f, line))
        {
            // check if line is a score or a name and add it to the corresponding vector
            if (isdigit(line[0]))
            {
                scores.push_back(stoi(line));
            }
            else if (isalpha(line[0]))
            {
                names.push_back(line);
            }
        }

        // print out the result
        printFinal(names, scores);
    }
    else
    {
        std::cout << "failed to read the file.";
    }
}

/**
 * Intent:  print out the top three scores and the players' names
 * Pre:     nothing showed
 * Post:    show the top three scores and the players' names
 * \param   names, a string vector that stores all the names
 * \param   scores, a integer vector that stores all the scores
 */
void printFinal(std::vector<std::string> names, std::vector<int> scores)
{
    // searching top three scores by using a for loop
    for (int i = 0; i < 3; i++)
    {
        // find the highest score
        int maxScore = *max_element(scores.begin(), scores.end());

        // find the index of the highest score in scores
        int scoreIndex = find(scores.begin(), scores.end(), maxScore) - scores.begin();

        // print out
        std::cout << names[scoreIndex] << std::endl << maxScore << std::endl;

        // delete the highest score and the name from vectors
        scores.erase(scores.begin() + scoreIndex);
        names.erase(names.begin() + scoreIndex);
    }
}
