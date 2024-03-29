#include "Month.h"
#include <iostream>
#include <map>
#include <string>

// int to month mapping
std::map<int, std::string> MONTHTABLE = {
	{1, "Jan"},
	{2, "Feb"},
	{3, "Mar"},
	{4, "Apr"},
	{5, "May"},
	{6, "Jun"},
	{7, "Jul"},
	{8, "Aug"},
	{9, "Sep"},
	{10, "Oct"},
	{11, "Nov"},
	{12, "Dec"}
};

// default constructor
Month::Month()
{
	this->month = 1;
}

// constructor with three letters
Month::Month(char first, char second, char third)
{
	// declare a string to essemble three chars
	std::string newStr;
	newStr += first;
	newStr += second;
	newStr += third;

	// loop through MONTHTABLE
	for (const auto& pair : MONTHTABLE) {

		// check if newStr in MONTHTABLE
		if (pair.second.compare(0, newStr.size(), newStr) == 0) {
			
			// newStr is legal
			this->month = pair.first;
			return;
		}
	}

	// newStr is illegal
	this->month = 1;
}

// constructor with an int
Month::Month(int monthInt)
{
	// check if monthInt is legal
	if (monthInt > 12 || monthInt < 1)
	{
		this->month = 1;
	}
	else
	{
		this->month = monthInt;
	}
}

// destructor
Month::~Month() {}

// get an int from user
void Month::inputInt()
{
	std::cin >> this->month;

	// check if input is legal
	if (this->month > 12 || this->month < 1)
	{
		this->month = 1;
	}
}

// get three chars from user
void Month::inputStr()
{
	std::string a, b, c;
	std::cin >> a >> b >> c;

	// assemble three chars
	std::string prefix = a + b + c;

	// loop through MONTHTABLE
	for (const auto& pair : MONTHTABLE) {

		// check if prefix in MONTHTABLE
		if (pair.second.compare(0, prefix.size(), prefix) == 0) {
			this->month = pair.first;
			return;
		}
	}

	// prefix is illegal
	this->month = 1;
}

// output int month
void Month::outputInt()
{
	std::cout << this->month;
}

// output str month
void Month::outputStr()
{
	std::cout << MONTHTABLE[this->month];
}

// add month by 1
Month Month::nextMonth()
{
	int temp = this->month + 1;

	// check if month is legal after plusing 1
	if (temp > 12) {

		// illegal then set it to 1
		temp = 1; 
	}

	// return a new constructor
	return Month(temp);
}
