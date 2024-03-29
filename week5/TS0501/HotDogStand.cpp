#include "HotDogStand.h"
#include <iostream>
#include <string>

// initialize static value
int HotDogStand::totalSellAmount = 0;

// default constructor
HotDogStand::HotDogStand(){}

// constructor with id
HotDogStand::HotDogStand(const char * id)
{
	// allocate a new array for standId
	this->standId = new char[std::strlen(id) + 1];

	// copy id to standId
	strcpy_s(this->standId, std::strlen(id) + 1, id);

	// set total amount to 0
	this->hotDogSellAmount = 0;
}

// constructor with id and amount
HotDogStand::HotDogStand(const char * id, int amount)
{
	// allocate a new array for standId
	this->standId = new char[std::strlen(id) + 1];

	// copy id to standId
	strcpy_s(this->standId, std::strlen(id) + 1, id);

	// set total amount to 0 and add to all amount
	this->hotDogSellAmount = amount;
	HotDogStand::totalSellAmount += amount;
}

// destructor
HotDogStand::~HotDogStand()
{
	delete[] standId;
}

// increment sell amount and total sell amount by one
void HotDogStand::justSold()
{
	HotDogStand::totalSellAmount += 1;
	this->hotDogSellAmount += 1;
}

// print out all data
void HotDogStand::print()
{
	std::cout << this->standId << ' ' << this->hotDogSellAmount << std::endl;
}

// return total sold amount of this store
int HotDogStand::thisStandSoldAmount()
{
	return this->hotDogSellAmount;
}

// return total amount of all stores
int HotDogStand::allStandSoldAmount()
{
	return HotDogStand::totalSellAmount;
}
