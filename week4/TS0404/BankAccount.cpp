#include "BankAccount.h"

// initialize
int BankAccount::total = 0;

// withdraw money
void BankAccount::withdraw(int output)
{
	// check if there's enough money
	if (this->balance >= output)
	{
		this->balance -= output;
		BankAccount::total -= output;
	}
}

// save money
void BankAccount::save(int input)
{
	this->balance += input;
	BankAccount::total += input;
}