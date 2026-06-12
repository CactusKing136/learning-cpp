#include <iostream>

int main()
{
	int num{};

	std::cout << "Enter a number: ";
	std::cin >> num;
	std::cout << num << " multiplied by 2 is " << (num * 2) << ".\n";

	return 0;
}
