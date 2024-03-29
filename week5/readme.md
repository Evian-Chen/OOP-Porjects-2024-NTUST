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
