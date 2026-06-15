#include <iostream>
#include <string>

int main()
{
	std::string input{};
	std::string output{};

	std::cout << "Enter a word or phrase: ";

	std::getline(std::cin >> std::ws, input);

	for (std::size_t i{0}; i < input.length(); i++)
	{
		output = input[i] + output;
	}

	if (input == output)
	{
		std::cout << "This is a palindrome.\n";
	}
	else
	{
		std::cout << "This is not a palindrome.\n";
	}

	return 0;
}
