#include <iostream>
#include "add.h"
#include "sub.h"
#include "mult.h"
#include "div.h"
#include "print.h"

int main()
{
	std::cout << "Enter equation: ";

	double num1{};
	double num2{};
	char hello{};
	double result{};

	std::cin >> num1 >> hello >> num2;

	if (hello == '+')
	{
		result = add(num1, num2);
	}
	if (hello == '-')
	{
		result = sub(num1, num2);
	}
	if (hello == '*')
	{
		result = mult(num1, num2);
	}
	if (hello == '/')
	{
		result = div(num1, num2);
	}

	print(result);

	return 0;
}
