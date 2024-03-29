#include "Point.h"

// update the point
void Point::Set(int vertical, int horizontal)
{
	this->vertical = vertical;
	this->horizontal = horizontal;
}

// move the point by (x, y)
void Point::Move(int x, int y)
{
	this->vertical += x;
	this->horizontal += y;
}

// rotate the point clockwise from the origin
void Point::Rotate()
{
	if (this->vertical <= 0)
	{
		if (this->horizontal <= 0)
		{
			// third dimension
			int temp = this->vertical * -1;
			this->vertical = this->horizontal;
			this->horizontal = temp;
		}
		else
		{
			// second dimension
			int temp = this->vertical * -1;
			this->vertical = this->horizontal;
			this->horizontal = temp;
		}
	}
	else
	{
		if (this->horizontal <= 0)
		{
			// forth dimension
			int temp = this->vertical *= -1;
			this->vertical = this->horizontal;
			this->horizontal = temp;
		}
		else
		{
			// first dimension
			int temp = this->horizontal;
			this->horizontal = this->vertical * -1;
			this->vertical = temp;
		}
	}
}
