#include "Point.h"

// construstor
Point::Point()
{
	this->position[0] = 0.0;
	this->position[1] = 0.0;
}

// copy construstor
Point::Point(const Point& point) {
	this->position[0] = point.position[0];
	this->position[1] = point.position[1];
}

// destructor
Point::~Point() {}

// set position to (x. y)
void Point:: Set(float x, float y)
{
	this->position[0] = x;
	this->position[1] = y;
}

// move position by (x, y)
void Point::Move(float x, float y)
{
	this->position[0] += x;
	this->position[1] += y;
}

// rotate position clockwise
void Point::Rotate()
{
	if (this->position[0] <= 0)
	{
		if (this->position[1] <= 0)
		{
			// third dimension
			int temp = this->position[0] * -1;
			this->position[0] = this->position[1];
			this->position[1] = temp;
		}
		else
		{
			// second dimension
			int temp = this->position[0] * -1;
			this->position[0] = this->position[1];
			this->position[1] = temp;
		}
	}
	else
	{
		if (this->position[1] <= 0)
		{
			// forth dimension
			int temp = this->position[0] *= -1;
			this->position[0] = this->position[1];
			this->position[1] = temp;
		}
		else
		{
			// first dimension
			int temp = this->position[1];
			this->position[1] = this->position[0] * -1;
			this->position[0] = temp;
		}
	}
}

// reflect position at origin point
void Point::Reflect()
{
	// for x
	if (this->position[0] < 0)
	{
		this->position[0] += this->position[0] * 2 * (-1);
	}
	else
	{
		this->position[0] += this->position[0] * 2 * (-1);
	}

	// for y
	if (this->position[1] < 0)
	{
		this->position[1] += this->position[1] * 2 * (-1);
	}
	else
	{
		this->position[1] += this->position[1] * 2 * (-1);
	}
}

// return x
int Point::GetHorizontal()
{
	return this->position[0];
}

// return y
int Point::GetVertical()
{
	return this->position[1];
}
