/***********************************************************************
 * File: TS0305_main.cpp
 * Author: Evian Chen
 * Create Date: 2024-03-07
 * Editor: Evian
 * Update Date: 2024-03-07
 * Description: This program draw different graph.
***********************************************************************/
#include <iostream>
#include <string>
#include <vector>

void printGraph(char (&graph)[100][100], int m, int n);    // print current graph
void drawSquare(char(&graph)[100][100], int m, int n);     //draw square
void drawTriangle(char(&graph)[100][100], int m, int n);   //draw triangle
void drawLine(char(&graph)[100][100], int m, int n);       //draw line

int main()
{
	// declare necessary variables
	std::string m, n, param;

	// get m
	std::cin >> m;

	// if m is EXIT, stop this program
	if (m != "EXIT")
	{
		// get column
		std::cin >> n;
		
		// turn string into integer
		int numM = std::stoi(m), numN = std::stoi(n);

		// declare graph as 2D array
		char graph[100][100];

		// make the m*n graph, n rows m columns
		for (int i = 0; i < numN; i++) // 6
		{
			for (int j = 0; j < numM; j++)  // 5
			{
				graph[i][j] = '*';
			}
		}

		// get first input
		std::cin >> param;

		// infinite loop until param is EXIT
		while (param != "EXIT")
		{
			// check what kind of graph to be drawn
			switch (param[0])
			{
			case ('S'):
				drawSquare(graph, numM, numN);
				break;
			case ('L'):
				drawLine(graph, numM, numN);
				break;
			case ('T'):
				drawTriangle(graph, numM, numN);
				break;
			default:
				break;
			}

			// get input
			std::cin >> param;
		}
	}
}

/**
 * Intent:  draw a Triangle on graph
 * Pre:     nothing showed
 * Post:    a Triangle added to the graph
 * \param   graph, a 2D-array
 * \param   m, int, row
 * \param   n, int, column
 */
void drawTriangle(char(&graph)[100][100], int m, int n)
{
	// declare necessary variables
	int w, x, y, tx, ty;
	std::string direction;

	// get input
	std::cin >> w >> y >> x >> direction;

	// check if all input are valid
	if ((x >= n) || (y >= m) || (x < 0) || (y < 0) || (w > m) || (w > n) || (w <= 0))
	{
		std::cout << "Out of range." << std::endl<< std::endl;
		
		// exit this function
		return;
	}
	
	// determine what kind of triangle
	if (direction == "LU")
	{
		// check if the triangle is in the graph
		if ((y - w < 0) || (x - w < 0))
		{
			std::cout << "Out of range." << std::endl << std::endl;

			// exit this function
			return;
		}

		// draw
		for (int j = 1; j < w + 1; j++)
		{
			for (int k = 0; k < j; k++)
			{
				tx = x - w + j;
				ty = y - j + k + 1;
				graph[tx][ty] = 'X';
			}
		}
	}
	else if (direction == "LD")
	{
		// check if the triangle is in the graph
		if ((y - w < 0) || (x + w > n))
		{
			std::cout << "Out of range." << std::endl << std::endl;

			// exit this function
			return;
		}

		// draw
		for (int j = 1; j < w + 1; j++)
		{
			for (int k = 0; k < j; k++)
			{
				tx = x + w - j;
				ty = y - k;
				graph[tx][ty] = 'X';
			}
		}
	}
	else if (direction == "RU")
	{
		// check if the triangle is in the graph
		if ((y + w > m) || (x - w < 0))
		{
			std::cout << "Out of range." << std::endl << std::endl;

			// exit this function
			return;
		}

		// draw
		for (int j = 1; j < w + 1; j++)
		{
			for (int k = 0; k < j; k++)
			{
				tx = x - w + j;
				ty = y + k;
				graph[tx][ty] = 'X';
			}
		}
	}
	else
	{
		// check if the triangle is in the graph
		if ((y + w > m) || (x + w > n))
		{
			std::cout << "Out of range." << std::endl << std::endl;

			// exit this function
			return;
		}

		// draw
		for (int j = w; j > 0; j--)
		{
			for (int k = 0; k < j; k++)
			{
				tx = x + w - j;
				ty = y + k;
				graph[tx][ty] = 'X';
			}
		}
	}
	
	// print result
	printGraph(graph, m, n);
}

/**
 * Intent:  draw a line on graph
 * Pre:     nothing showed
 * Post:    a line added to the graph
 * \param   graph, a 2D-array
 * \param   m, int, row
 * \param   n, int, column
 */
void drawLine(char(&graph)[100][100], int m, int n)
{
	// declare necessary variables
	int x1, x2, y1, y2, dx, dy;

	// get two points
	std::cin >> x1 >> y1 >> x2 >> y2;

	// check if all the points are valid
	if ((x1 >= m) || (y1 >= n) || (x1 < 0) || (y1 < 0) || (x2 >= m) || (y2 >= n) || (x2 < 0) || (y2 < 0))
	{
		std::cout << "Out of range." << std::endl << std::endl;

		// exit this function
		return;
	}

	// get the distance between two given points
	dx = x1 - x2;  
	dy = y1 - y2; 

	// repear time
	int time = std::max(abs(dx), abs(dy));  

	// the first point
	graph[y1][x1] = 'X';

	// draw the remaining line using for loop
	for (int i = 0; i < time; i++)  
	{
		// determine the point to be drawn
		if (dx > 0)
		{
			dx--;
			x1--;
		}
		else if (dx < 0)
		{
			dx++;
			x1++;
		}
		if (dy > 0)
		{
			dy--;
			y1--;
		}
		else if (dy < 0)
		{
			dy++;
			y1++;
		}

		// update graph
		graph[y1][x1] = 'X';
	}

	// print result
	printGraph(graph, m, n);
}

/**
 * Intent:  draw a square on graph
 * Pre:     nothing showed
 * Post:    a square added to the graph
 * \param   graph, a 2D-array
 * \param   m, int, row
 * \param   n, int, column
 */
void drawSquare(char(&graph)[100][100], int m, int n)
{
	// declare necessary variables
	int w, x, y;

	// get input
	std::cin >> w >> x >> y;

	// check if all values are valid
	if ((x >= m) || (y >= n) || (x < 0) || (y < 0) || (w+x > m) || (w+y > n) || (w + x < 0) || (w + y < 0))
	{
		std::cout << "Out of range." << std::endl << std::endl;

		// exit this function
		return;
	}

	// draw square using nested for loop
	for (int i = 0; i < w; i++)
	{
		for (int j = 0; j < w; j++)
		{
			int tx = i + x, ty = j + y;
			graph[ty][tx] = 'X';
		}
	}
	
	// print result
	printGraph(graph, m, n);
}

/**
 * Intent:  draw the graph
 * Pre:     nothing showed
 * Post:    shows the current graph
 * \param   graph, a 2D-array
 * \param   m, int, row
 * \param   n, int, column
 */
void printGraph(char(&graph)[100][100], int m, int n)
{
	// draw graph using double for loop
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < m; j++)  
		{
			std::cout << graph[i][j];
		}
		std::cout << std::endl;
	}

	// new line at the end
	std::cout << std::endl;
}