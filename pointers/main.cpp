#include <iostream>
#include <string>

int main()
{
	char* buffer = new char[8]; // This allocates 8 bytes of memory
	memset(buffer, 0, 8);

	delete[] buffer;

	int var{8};
	std::cout << var << std::endl;

	int *ptr{&var};
	*ptr = 5;

	std::cout << var << std::endl;

	return 0;
}
