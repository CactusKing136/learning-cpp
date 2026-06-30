#include <iostream>
#include <string>
#include <unistd.h>

int main()
{
	const std::string frames[]{"0_0", "0_0", "0_0", "0_0", "0_0", "-_0", "-_-", "0_-"};

	std::cout << "\033[?25l" << "\n";

	for (int i{0}; i < 50; ++i)
	{
		std::cout << "\r" << frames[i % 8] << "    My name is Alex" << std::flush;
		usleep(150000);
	}

	return 0;
}
