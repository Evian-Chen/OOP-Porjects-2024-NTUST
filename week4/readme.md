# Overview
## problem 1
Please implement a class named Point to store and manipulate the position of the point on the screen.

	Class Point has two private integer variables: vertical and horizontal, where vertical is the x coordinate and horizontal is the y coordinate of a point.
	The default coordinate of Point when constructing is (0,0).
	Please implement the following member functions:
	void Set(int vertical, int horizontal)
Reset the coordinate position of the point by the given the x and y.
	void Move(int x, int y)
Move the current point x pixels on the x-axis and y pixels on the y-axis.
	void Rotate()
Rotate this point 90 degrees clockwise from the origin.
	int RetrieveVertical() const 
Get the value x of the point.
	int RetrieveHorizontal() const
Get the value y of the point.
