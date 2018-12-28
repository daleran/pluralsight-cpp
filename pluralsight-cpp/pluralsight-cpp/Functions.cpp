#include "pch.h"
#include <string>

using namespace std;

string EvalStatement(int a, int b)
{
	if (a < b)
	{
		return "less than";
	}
	else if (a > b)
	{
		return "greater than";
	}
	else
	{
		return "";
	}
}
