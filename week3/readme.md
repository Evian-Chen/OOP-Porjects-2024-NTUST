# Overview
## problem 1
Please write a program that reads a list of numbers with an integer type and counts how many times each number appears. You should note that the number of entries is not limited, your program should try to handle that. 
The output is a two-column table sorted descending by the number's count value. The first column is the list of all numbers, and the second column is the count of each of them. 

Input:
For the array values: –12 3 –12 4 1 1 –12 1 –1 1 2 3 4 2 3 –12

Output:
N Count
4 2
3 3
2 2
1 4
–1 1
–12 4
The two integers are divided by one tab(\t).

## problem 2
You are asked to generate a text-based histogram for a quiz of students. The quiz is graded on a scale from 0 to 5. Please design a program that allows the user to enter the student's grades one by one and count the times of each grade appears. 
When the input finished, please print the text-based histogram with the format in the "Output" section below. 
The program should be capable of handling an arbitrary number of student grades. 
 
輸入說明（Input）：Input filename:grade.txt
if the input grades are 
3 0 1 3 3 5 5 4 5 4 
輸出說明（Ouput）：Output filename:grades.Output
the program should output
1 grade(s) of 0
1 grade(s) of 1
0 grade(s) of 2
3 grade(s) of 3
2 grade(s) of 4
3 grade(s) of 5

## problem 3
There is a given arbitrary number X(double), a positive integer M, a positive integer N, and a character C. Please output results with following steps:
1.	Reformat the decimal part of X (excluding the decimal point) to N characters. The characters over N digits must be unconditionally discarded. If the decimal part of X is less than N digits, please make up with 0.
2.	After step 1, if X (including negative and decimal points) is still less than M characters, please fill in with character C in front of the number. The amount of C and the number itself should meet exactly M characters.
Input:
Each line represents a group of X, M, N, and C. The four inputs are separated by spaces.
	X: The target number that need to be formed.
	M: The total length of the output. (Including negative sign and decimal point.)
	N: Number of reserved digits of the decimal part.
	C: Letter to be filled when the length is not enough. (less than M digits)
The program continues to ask for input, and ends if EOF is read.
Please note that C may be a space.

Output:
Each line is outputted according to the requirements of the topic.

## problem 4
Assume that the maximum integer of a k-bit CPU can process is (2^k) – 1. Every 10 years, k will grow by a multiple of 2. Assume that your company released a 4-bit CPU in 1900, which can store 15 as the largest integer. (8-bit will be released in 1910, and 1920 will be 16-bit, and so on.)
 
There is a given year Y, find the maximum positive integer N where N! is within the CPU calculation range of the current year.

Test time limit: 5.0 seconds

Input:
 Each line has a positive integer Y ( 2200 >= Y >= 1900 ).
The input method is unlimited input until EOF is read.

Output:
Output N, so that N! is within the CPU calculation range of the current year.

## problem 5
