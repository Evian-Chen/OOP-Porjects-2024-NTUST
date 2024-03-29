#ifndef Point_H
#define Point_H
#include <iostream>
using namespace std;

class Point
{
private:
	int vertical;
	int horizontal;

public:
	// constructer
	Point()
	{
		vertical = 0;
		horizontal = 0;
	}

	// update point
	void Set(int vertical, int horizontal);

	// move point by (x, y)
	void Move(int x, int y);

	// rotate the point clockwise from the origin
	void Rotate();

	// get data
	int RetrieveVertical() const { return vertical; }
	int RetrieveHorizontal() const { return horizontal; }
};

#endif //Point_H