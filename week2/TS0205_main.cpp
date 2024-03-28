/***********************************************************************
 * File: TS0205_main.cpp
 * Author: Evian Chen
 * Create Date: 2024-02-29
 * Editor: Evian
 * Update Date: 2024-02-29
 * Description: This program adds two large numbers.
***********************************************************************/
#include <iostream>
#include <string>

bool isValid(const std::string str);  // check if the input number in valid
std::string finalResult(const std::string a, const std::string b, const std::string ans, int carry);  // complete the final result

int main()
{
	// declare necessary variables
	std::string a, b, ans = "";
	int n, total, carry = 0;

	// get the number of pairs
	std::cin >> n;

	// get all the input pairs
	for (int i = 0; i < n; i++)
	{
		// get input
		std::cin >> a >> b;

		// check if a and b are valid input
		if (isValid(a) && isValid(b))
		{
			// choose the smaller number as the number of the following loop
			int len = std::min(a.length(), b.length());
			
			// add number one by one from right, until a or b meets the very left
			for (int j = 1; j <= len; j++)
			{
				total = (a[a.length() - j] - '0') + (b[b.length() - j] - '0');
				
				// add the previous carry
				if (carry != 0)
				{
					total += carry;
					carry = 0;
				}

				// check if there's carry
				if (total >= 10)
				{
					carry = total / 10;
					total %= 10;
				}

				// add the addition result to the answer string
				ans = std::to_string(total) + ans;
			}

			// complete the un-processed digits
			ans = finalResult(a, b, ans, carry);

			// print out result
			std::cout << ans << std::endl;

			// initialize variables for the next pair
			ans = "";
			carry = 0;
		}
		else
		{
			// input pair is invalid
			std::cout << "Not a valid number, please try again." << std::endl;
		}
	}
}

/**
 * Intent:  to add the remaining part of a or b that hasn't been added to the final answer
 * Pre:     nothing showed
 * Post:    return the final answer
 * \param   a: a string that represents a large number
 * \param   b: a string that represents a large number
 * \param   ans: a string represents the number of a+b
 * \param   carry: a integer
 * \return  ans: a string of the result of a+b
 */
std::string finalResult(const std::string a, const std::string b, std::string ans, int carry)
{
	// declare necessary variables
	int len = std::max(a.length(), b.length());
	int total = 0;

	// caculating the remaining part using a loop
	for (int i = len - ans.length() - 1; i >= 0; i--)
	{
		// check if there's a carry
		if (carry != 0)
		{
			total = (a[i] - '0') + carry;
			carry = total / 10;
			total %= 10;
		}
		else
		{
			total = (a[i] - '0');
		}
		
		// add the digit into the result
		ans = std::to_string(total) + ans;
	}

	// check if there's still a carry that hasn't been added to the answer
	if (carry != 0)
	{
		ans = std::to_string(carry) + ans;
	}

	return ans;
}

/**
 * Intent:  to determine if str is a valid number
 * Pre:     nothing showed
 * Post:    return true if str is a valid number, false otherwise
 * \param   str: a string that represents a large number
 * \return  true or false
 */
bool isValid(const std::string str)
{
	// using for each loop to check every character in str
	for (char ch : str)
	{
		// ch is not a digit, which means str is invalid
		if (!std::isdigit(ch))
		{
			return false;
		}
	}

	// every character in str is digit
	return true;
}
