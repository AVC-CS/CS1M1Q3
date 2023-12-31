// Test definitions. Do NOT edit this file!
#define CATCH_CONFIG_MAIN // defines main() automatically
#include "catch.hpp"
#include "main.hpp"
// tests for exercise 1
TEST_CASE("Ex1 getRdnum()", "[example]")
{
	int result = 1;
	int tmp, fault;

	srand(time(0));
	for (int i = 0; i < 20; i++)
	{
		tmp = getRdnum();
		cout << tmp << "\t";
		if ((tmp <= 0) || (tmp > 10))
		{
			fault = tmp;
			result = 0;
		}
	}
	cout << endl;
	INFO("Your random number is " << fault);
	INFO("Your random number shoub be between 1 and 10");
	REQUIRE(result == 1);
}
// tests for exercise 2
TEST_CASE("Ex2 getRdnum(21, 25)", "[example]")
{
	int result = 1;
	int tmp, fault;
	srand(time(0));
	for (int i = 0; i < 20; i++)
	{

		tmp = getRdnum(20, 25);
		cout << tmp << "\t";
		if ((tmp < 21) || (tmp > 25))
		{
			fault = tmp;
			result = 0;
		}
	}
	cout << endl;
	INFO("Your random number is " << fault);
	INFO("Your random number shoub be between 21 and 25");
	REQUIRE(result == 1);
}
// tests for exercise 3
TEST_CASE("Ex3: getRdnum(5)", "[example]")
{
	int result = 1;
	int tmp, fault;
	srand(time(0));
	for (int i = 0; i < 20; i++)
	{
		tmp = getRdnum(5);
		cout << tmp << "\t";
		if ((tmp <= 0) || (tmp > 5))
		{
			fault = tmp;
			result = 0;
		}
	}
	cout << endl;
	INFO("Your random number is " << fault);
	INFO("Your random number shoub be between 1 and 5");
	REQUIRE(result == 1);
}
