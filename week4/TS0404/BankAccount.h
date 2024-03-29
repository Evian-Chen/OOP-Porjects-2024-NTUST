class BankAccount {
private:
	int balance;
	static int total;  // shared by all objs of this class
public:
	// constructer
	BankAccount()
	{
		this->balance = 0;
	};

	// constructer with input
	BankAccount(int input)
	{
		this->balance = input;
		BankAccount::total += input;
	}

	//return balance
	int getBalance() { return this->balance; }

	// withdraw money
	void withdraw(int output);

	// save money
	void save(int input);

	// return total money in bank
	static int getAllMoneyInBank() { return BankAccount::total; }
};