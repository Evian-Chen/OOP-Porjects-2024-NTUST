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

## problem 2
Define a class for a type called Fraction. This class is used to represent a ratio of two integers. Include mutator functions that allow the user to set the numerator and the denominator. Also include a member function that returns the value of the numerator divided by the denominator as a double, but if the value can only represent by an integer, then it should be represented integer. Include an additional member function that outputs the value of the fraction reduced to lowest terms. For example, instead of outputting 20/60 the function should output 1/3. This will require finding the greatest common divisor for the numerator and denominator, and then dividing both by that number. Embed your class in a test program.
Input:
No input.
Output:
As following sample.

## problem 3
Please write a program and use the recursive function GCD(...) (abbreviation for Greatest Common Divisor) to find the greatest common divisor of two positive integers.

Input:
Input two positive integers a and b (a, b <= 2147483647).

Output:
Output the greatest common divisor of two positive integers a and b.

## problem 4
Define a class named BankAccount to simulate bank deposits.

	The class BankAccount has two variables: 
static total(int): store the total money amount of all accounts in the bank.
balance(int): store the money amount of this account.

	The class BankAccount has two constructors:
	BankAccount(): construct a BankAccount where the balance is 0. 
	BankAccount (int input): construct a BankAccount where the balance is input. 

	You should implement the following functions:
	void withdraw (int output): withdraw money in the bank with the value of output.
	void save(int input): save money in the bank with the value of input.
	int getBalance(): return the current balance of this account.
	int getAllMoneyInBank (): return the value of the total money amount in the bank.

Input:
The main() function in your submission will be replaced when judging.
You can use the main() function in “Other Notes” to test your program.
No inputs for this exercise.

Output:
The result of executing your program with the given main function.

## problem 4
