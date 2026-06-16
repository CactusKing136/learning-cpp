#include <iostream>
#include <string>

int main()
{

	int max{};

	std::cout << "Enter the max number: ";
	std::cin >> max;

	for (int i{1}; i <= max; ++i)
	{
		if (i % 6 == 0)
		{
			std::cout << "FizzBuzz" << std::endl;
		}
		else if (i % 2 == 0)
		{
			std::cout << "Fizz" << std::endl;
		}
		else if (i % 3 == 0)
		{
			std::cout << "Buzz" << std::endl;
		}
		else
		{
			std::cout << i << std::endl;
		}
	}

	return 0;
}
