#include <iostream>

class Point
{
private:
	float position[2];

public:
	// construstor
	Point();

	// copy construstor
	Point(const Point &point);

	// destructor
	~Point();

	// set position to (x. y)
	void Set(float x, float y);

	// move position by (x, y)
	void Move(float x, float y);

	// rotate position clockwise
	void Rotate();

	// reflect position at origin point
	void Reflect();

	// return x
	int GetHorizontal();

	// return y
	int GetVertical();
};
