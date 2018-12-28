#pragma once

#include <string>

class Transaction
{
private:
	int amount;
	std::string type;
public:
	Transaction(int amt, std::string typ);
	std::string Report();

};