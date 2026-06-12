#include <iostream> // for std::cout and std::cin

int main()
{
	int n1;
	int n2;
	int n3;

	std::cout << "Enter three numbers: ";
	std::cin >> n1 >> n2 >> n3;

	std::cout << "You entered " << n1 << ", " << n2 << ", and " << n3 << ".\n";
}
