# Overview
## problem 1
Write a function that computes the average and standard deviation of input scores. The standard deviation is defined to be the square root of the average of the input values: 
(s_i - m)^2, where m is the average of the input scores s_i , i= 1, …, n.
Note that the number of input scores should be dynamic.

input：The first input is n, others are s_i, where i = 1 to n.

output：Output the Average and Standard deviation, separated by a tab.

## problem 2
Consider a text file named scores.txt that contains player scores for a game. A possible sample is shown next where Ronaldo’s best score is 10400, Didier’s best score is 9800, etc. Put at least five names and scores in the file.

Ronaldo
10400
Didier
9800
Pele
12300
Kaka
8400
Cristiano
8000

Write a function named getHighScores that takes two array parameters, an array of strings and an array of integers. The function should scan through the file and set the string array entry at index 0 to the name of the player with the highest score and set the integer array entry at index 0 to the score of the player with the highest score. The string array entry at index 1 should be set to the name of the player with the second highest score and the integer array entry at index 1 should be set to the score of the player with the second highest score. Do the same for the entries at index 2. Together, these two arrays give you the names and scores of the top three players. In your main function, test the getHighScores function by calling it and outputting the top three players and scores.
Input:
Given an input file “scores.txt” which contains player’s scores for a game.
Output:
Output the names and scores of top three players.

## problem 3
The input messages of each line are English characters without spaces. Try to put the characters into a n*n square. Note that (n-1)^2 < message length <= n^2.

Input:
Input a string without whitespace.

Output:
The coded message is obtained by reading down the columns going left to right.

## problem 4
You are an IT employee in a company. Your manager requests you to print out N employee’s information, and you need to make sure the result remains clean. Each employee has three attributes: Name, Salary and Bonus. 

Input:
The input contains several cases, each of them as described below.
The first line of input contains an integer N (10^6 >= N > 0), which represents the number of employees. Each of the next N lines indicates the information of each employee with three attributes: Name, Salary (between 10^9 ~ 0) and Award (between 10^9 ~ 0). Each attribute will be separated by one space.

*The name attribute do not contain spaces.

The program should end after reading EOF.

Output:
For each set of input data (from the previous N to the next N), please make sure the width of each column is the same as the attribute with the longest width in each column. Use the symbol "|" to separate each column and align the content to the right. Note that for numeric attributes (Salary, Bonus), the content should be indented by two additional spaces.

## problem 5
Given two integers A, B. Please calculate the adding result of A+B, notice that the maximum bits of the number can approximate to 10000.
Don’t try to use long long, long long int, or _m128, etc. These variable types are invalid because the maximum bits of the given number will approximate to 10000((10^10000)-1).
Make sure the input number is valid, or print “Not a valid number, please try again.” 
Please package the big number as a structure (e.g. struct BigInt…) with a simple object type for each bit.
To add the two big numbers, please use the "function Add(...)" shown as below.

P.S. const& won’t affect the grammar of parameter passing but can avoid unnecessary memory usage. Use it or not depends on you.

Struct BigInt
{
    …
}
BigInt Add(const BigInt &lhs,const BigInt &rhs)
{
  //Calculation
  Return …;
}
int main()
{
  BigInt a,b;
  …Input a,b
  BigInt result = Add(a,b);
  …Output result
}

Input:
The first line of input contains an integer N (100 > N > 0), which indicates there’re N following data pairs. Note that every two lines makes a data pair, and each pair contains two big integers A and B on a line by itself. The maximum bits of A, B is（10^l0000) – 1.

Output:
Print the result of A+B.

## problem 6
This is the tax payment rules for a country. Different income ranges correspond to different tax rates. Please calculate the tax payable of citizens based on this table:

  Income              Rate

  Not over $750   1% of income

  $750—$2,250    $7.50 plus 2% of amount over $750

  $2,250—$3,750  $37.50 plus 3% of amount over $2,250

  $3,750—$5,250    $82.50 plus 4% of amount over $3,750

  $5,250—$7,000  $142.50 plus 5% of amount over $5,250

  Over $7,000        $230.00 plus 6% of amount over $7,000

Input:
Each line represents the income of one citizen, and the income is a float-type number greater than 0.

Output:
Calculate taxes payable for each citizen and print them in order.
