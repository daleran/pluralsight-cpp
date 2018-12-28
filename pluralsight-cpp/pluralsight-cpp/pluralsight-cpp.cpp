// pluralsight-cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <time.h> 
#include <random> 
#include "Functions.h"

using namespace std;

int main()
{
	bool run = true;

	typedef std::mt19937 MyRNG;  
	uint32_t seed_val = (uint32_t)time(NULL);
	MyRNG rng;
	rng.seed(seed_val);
	uniform_int_distribution<uint32_t> uint_dist1_10(1, 10);

	int answer = uint_dist1_10(rng);
	int guess = 0;

	while (run)
	{
		
		cout << "Guess a number (1-10): ";
		cin >> guess;

		string eval = EvalStatement(guess, answer);
		
		if (guess == answer)
		{
			run = false;
		}

		cout << endl << "Your guess, " << guess << ", is " << eval << " the answer." << endl;
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
