#pragma once
class Month
{
private:
	int month;

public:
	// default constructor
	Month();

	// constructor with three letters
	Month(char first, char second, char third);

	// constructor with an int
	Month(int monthInt);

	// destructor
	~Month();

	// get an int from user
	void inputInt();

	// get three chars from user
	void inputStr();

	// output int month
	void outputInt();

	// output str month
	void outputStr();

	// add month by 1
	Month nextMonth();
};

