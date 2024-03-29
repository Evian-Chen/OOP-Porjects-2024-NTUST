# Overview
## problem 1
Your boss has a hot dog chain in the city, and he needs your help to manage his hot dog stores.

	Please define a class called HotDogStand() to store and manage the hot dog stores.

	The class HotDogStand has three variables:
	char *standId：The ID of the store.
		int hotDogSellAmount：The hot dog sales volume of the store.
	static int totalSellAmount：The total hot dog sales volume of all stores.

	The class HotDogStand has two constructors:
	HotDogStand (id): Construct a HotDogStand with the given ID and set the sales volume to 0.
	HotDogStand (id, amout) : Construct a HotDogStand with the given ID and sales volume.

	You are required to implement the following member functions:
	justSold(): Increase the hot dog sales volume by 1.
	print()：Print the ID and sales volume of the store separated by spaces.
	thisStandSoldAmount()：Return the sales volume of the store.
	allStandSoldAmount()：Return the total sales volume of all stores.

Input:
The main() function in your submission will be replaced when judging.
You can use the main() function in “Other Notes” to test your program.
This exercise does not have an input.

Output:
The result of executing your program with the given main function.

## pronlem 2
Please define a class named Month to display the formatted month. 

	The abbreviation of a month in this exercise is the first three letters of the name with initial capitalization.

	This class has only one variable month(int) for use as storing the current month.

	This class has three constructors:
	Month(): Construct a Month class that defaults to January.
	Month(char first, char second, char third): Use the given abbreviation to construct the Month class, the parameters represent each letter of the abbreviation.
	Month(int monthInt): Construct a Month class with the value of  “monthInt”.
**Note that if the given value is invalid, please set the month to January.

	You are required to implement the following member functions:
	void inputInt(): 
Read an int x, and modify the current month to x. If x is invalid (x < 1 or x > 12), please set the month value to 1.
	void inputStr(): 
Read three letters a, b and c. These letters represent each letter of the abbreviation of a month. Modify the letters to the corresponding month value. If the input is invalid, set the month value to 1.
	void outputInt(): Print the month value.
	void outputStr(): Print the abbreviation of the month.
	void nextMonth(): Increment month value.

Input:
The main() function in your submission will be replaced when judging.
You can use the main() function in “Other Notes” to test your program.
The input is a series of integers or strings corresponding to the main method.

## problem 3
Write a program that records at most 10 student data by structures. There are four functions for user to use:
(1)	insert (up to 10 records), (2) search, (3) delete, (4) print.

A record of a student is defined as follow:
typedef struct {
char firstName[25];	
char lastName[30];
char phone[15];
} StRec;
Input:
There are four kinds of command formats (insert, delete search and print). Except the “print” command, the other three command lines contain firstName, lastName and phone. Use space to separate each data. The print command only needs to enter “print”.
Format of four commands:
(1) insert + firstName + lastName + phone
(E.g. insert Harry Potter 0987654321)
(2) delete + firstName + lastName + phone
(E.g. delete Harry Potter 0987654321)
(3) search + firstName + lastName + phone
(E.g. search Harry Potter 0987654321)
(4) print
(firstName <= 25 letters, lastName <= 30 letters, phone <= 15 numbers)
  User can keep entering commands until reading EOF.
Output:
Users need to check for the input format accuracy, including:
(1)	If the length of firstName or lastName or phone is too long.
(2)	The string that inputted was not one of the four commands.
(3)	If phone is not a number.
If input meets any of the above conditions, print “Input Error” and re-enter a command.
When insert is called, insert the record after last record. If there are already 10 records or the record already exists, print “Insert Error”.
When delete is called, find the record and delete it. If it does not exist, print “Delete Error”.
When search is called, find the record and print which index the record is in. If it does not exist, print “Search Error”.
When print is called, print all three data of records and separate them by space (e.g. Harry Potter 0987654321). If there are no records, print “Print Error”.

## problem 4
A Sudoku is a 9x9 grid that is completed when every 3x3 square, row and column consist of the numbers 1-9.
For this task, you will be given a completed 9x9 square, Create a function that checks to make sure each 3x3 square contains each number from 1-9 exactly once, and there are no duplicates. Furthermore, each row and each column doesn’t contain duplicates with no numbers outside the range 1~9.

## problem 5
The type Point is a fairly simple data type, but under another name (the template class pair) this data type is defined and used in the C++ Standard Template Library, although you need not know anything about the Standard Template Library to do this exercise. Write a definition of a class named Point that might be used to store and manipulate the location of a point in the plane. You will need to declare and implement the following member functions:

a.	A member function Set that sets the private data after an object of this class is created. Attention! The data must be an array of float in size 2, initialized by zero.

b.	A member function named Move to move the point along the horizontal and vertical directions specified by the first and second arguments.

c.	A member function named Rotate to rotate the point by 90 degrees clockwise around the origin.

d.	A member function named Reflect to reflect point in the origin.

e.	Two const getter functions to retrieve the current coordinates of the point (horizontal and vertical).

f.	A copy constructor used to copy value of other point.

A destructor used to release memory before the instance of class destroyed. Avoiding memory leak!
