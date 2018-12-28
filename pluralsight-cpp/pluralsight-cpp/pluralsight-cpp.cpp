// pluralsight-cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main()
{
	Account a1;
	a1.Deposit(90);
	cout << "After depositing $90" << " balance is " << a1.GetBalance() << endl;
	for (auto s : a1.Report())
	{
		cout << s << endl;
	}
	a1.Withdraw(50);
	if (a1.Withdraw(100))
	{
		cout << "Second withdraw succeeds." << endl;
	}
	cout << "After withdrawing $50 then $100" << " balance is " << a1.GetBalance() << endl;
	for (auto s : a1.Report())
	{
		cout << s << endl;
	}


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
