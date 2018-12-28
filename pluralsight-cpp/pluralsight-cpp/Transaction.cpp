#include "pch.h"
#include "Transaction.h"

using namespace std;

Transaction::Transaction(int amt, std::string typ) : amount(amt), type(typ)
{
}

std::string Transaction::Report()
{
	return "   " + type + " " + to_string(amount);
}
