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
