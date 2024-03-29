/***********************************************************************
 * File: main.cpp
 * Author: Evian Chen
 * Create Date: 2024-03-21
 * Editor: Evian
 * Update Date: 2024-03-21
 * Description: This program determine if a 2D integer array is a valid
 *				sudoku game.
***********************************************************************/
#include <iostream>
#include <string>

bool checkRow(int sudoku[9][9]);
bool checkCol(int sudoku[9][9]);
bool check3x3(int sudoku[9][9]);

int main()
{
	// declare necessary variables
	int sudoku[9][9];
	int num, indexR = 0, indexC = 0;
	bool next = false;
	std::string str;

	// build sudoku table
	while (std::cin >> str)
	{
		// initialize column index
		indexC = 0;

		// loop through the input
		for (char ch : str)
		{
			// get rid of cama
			if (ch != ',')
			{
				// turn char into integer
				num = ch - '0';

				// update sudoku matrix
				sudoku[indexR][indexC] = num;
				
				// update column index
				indexC++;
			}
		}

		// update row index
		indexR++;

		// check if a sudokumatrix is full
		if (next)
		{
			// sudoku is full, check if it is a valid matrix
			if (checkRow(sudoku) && checkCol(sudoku) && check3x3(sudoku))
			{
				std::cout << "True" << std::endl;
			}
			else
			{
				std::cout << "False" << std::endl;
			}

			// initialize for the next sudoku
			next = false;
			indexR = 0;
		}
		
		// check if row index out of range
		if (indexR == 8)
		{
			next = true;
		}	
	}
}

/**
 * Intent:  check if sum of every rows is 45 (only contain 1~9 once)
 * Pre:     nothing showed
 * Post:    return a boolean
 * \param   sudoku, a 2D integer array
 * \return  a boolean
 */
bool checkRow(int sudoku[9][9])
{
	// initilize total
	int total = 0;

	// loop through sudoku
	for (int i = 0; i < 9; i++)
	{
		// add to every num 
		for (int j = 0; j < 9; j++)
		{
			total += sudoku[i][j];
		}
		if (total != 45)
		{
			return false;
		}

		// initilize total
		total = 0;
	}

	return true;
}

/**
 * Intent:  check if sum of every columns is 45 (only contain 1~9 once)
 * Pre:     nothing showed
 * Post:    return a boolean
 * \param   sudoku, a 2D integer array
 * \return  a boolean
 */
bool checkCol(int sudoku[9][9])
{
	// initilize total
	int total = 0;

	// loop through sudoku
	for (int i = 0; i < 9; i++)
	{
		// add to every num 
		for (int j = 0; j < 9; j++)
		{
			total += sudoku[j][i];
		}
		if (total != 45)
		{
			return false;
		}

		// initialize total
		total = 0;
	}

	return true;
}

/**
 * Intent:  check if sum of every 3x3 square is 45 (only contain 1~9 once)
 * Pre:     nothing showed
 * Post:    return a boolean
 * \param   sudoku, a 2D integer array
 * \return  a boolean
 */
bool check3x3(int sudoku[9][9])
{
	// split sudoku into 9 squares using nested for loop
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			// the next step is to loop through inner 9 squares
			// therefore, initialize index for the squares
			int r = 3 * i, c = 3 * j, total = 0;

			// loop through 3x3 square using nested for loop and add to total
			for (int row = 0; row < 3; row++)
			{
				for (int col = 0; col < 3; col++)
				{
					total += sudoku[r + row][c + col];
				}
			}

			// check if it is a valid sudoku matrix
			if (total != 45)
			{
				return false;
			}
		}
	}

	return true;
}
