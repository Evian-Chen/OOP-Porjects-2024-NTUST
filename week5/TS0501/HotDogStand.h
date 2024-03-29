#pragma once
class HotDogStand
{
private:
	char* standId;
	int hotDogSellAmount;
	static int totalSellAmount;

public:
	// default constructor
	HotDogStand();

	// constructor with id
	HotDogStand(const char *id);

	// constructor with id and amount
	HotDogStand(const char *id, int amount);

	// destructor
	~HotDogStand();

	// increment sell amount and total sell amount by one
	void justSold();

	// print out all data
	void print();

	// return total sold amount of this store
	int thisStandSoldAmount();

	// return total amount of all stores
	static int allStandSoldAmount();
};

