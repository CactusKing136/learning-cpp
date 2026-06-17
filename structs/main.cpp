#include <iostream>
#include <string>
#include "fraction.h"

void displayFraction(Fraction f)
{
	std::cout << f.numerator << '/' << f.denominator << std::endl;
}

int main()
{
	Fraction myFrac{2, 3};

	displayFraction(myFrac);

	return 0;
}
