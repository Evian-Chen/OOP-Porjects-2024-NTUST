# Overview
## problem 1
The Babylonian algorithm to compute the square root of a positive number n is as follows:
1. Make a guess at the answer (you can pick n/2 as your initial guess).
2. Compute r = n / guess .
3. Set guess= (guess + r) / 2.
4. Go back to step 2 for as many iterations as necessary. The more steps 2 and 3 are repeated, the closer guess will become to the square root of n.

   Write a program that inputs a double for n, iterates through the Babylonian algorithm until the guess subtract the previous guess smaller than 0.01, and outputs the answer as a double to two decimal places. Your answer should be accurate even for large values of n.

## problem 2
