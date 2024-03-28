# Overview
## problem 1
The Babylonian algorithm to compute the square root of a positive number n is as follows:
1. Make a guess at the answer (you can pick n/2 as your initial guess).
2. Compute r = n / guess .
3. Set guess= (guess + r) / 2.
4. Go back to step 2 for as many iterations as necessary. The more steps 2 and 3 are repeated, the closer guess will become to the square root of n.

   Write a program that inputs a double for n, iterates through the Babylonian algorithm until the guess subtract the previous guess smaller than 0.01, and outputs the answer as a double to two decimal places. Your answer should be accurate even for large values of n.

## problem 2
Given a integer A as a time in seconds. 
Convert the format of A from (seconds) to (hours: minutes: seconds).
Input:
For each test case, input a integer A(0 <= A <= 2^64-1). Stop until read an EOF.

Output:
For each test case, print “x hours y minutes and z seconds”, the value of x, y, z is described above.

## problem 3
Write a program to display the following “*” pattern on the screen.

## problem 4
Given an arbitrary integer INPUT ( INPUT ), follow the requirements below to 
output it:


If the number of characters in INPUT (including the negative sign) is less 
than 10 digits, fill in the space at the beginning, so that the number of 
spaces plus the number of characters in INPUT just meets 10 digits.

Input:
Each line represents an INPUT, the program continues to request input, and ends if EOF is read.

## problem 5
Given a radius r, please compute and output the volume of a sphere with radius 
r.
PI = 3.14159265358979323846
