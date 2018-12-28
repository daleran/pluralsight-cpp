#include "pch.h"
#include "Account.h"

using namespace std;

Account::Account() :balance(0)
{
}

std::vector<std::string> Account::Report()
{
	vector<string> report;
	report.push_back("Balance is " + to_string(balance));
	report.push_back("Transactions: ");
	for (auto t : log)
	{
		report.push_back(t.Report());
	}
	report.push_back("----------------------------");
	
	return report;
}

bool Account::Deposit(int amount)
{
	if (amount >= 0)
	{
		balance += amount;
		log.push_back(Transaction(amount, "Deposit"));
		return true;
	}
	return false;
}

bool Account::Withdraw(int amount)
{
	if (amount >= 0)
	{
		if (balance >= amount)
		{
			balance -= amount;
			log.push_back(Transaction(amount, "Withdrawal"));
			return true;
		}
	}
	return false;
}
