#include <iostream>
#include <string>

namespace Colour
{
	enum Colour
	{
		red,
		blue,
		gree,
		black,
		white
	};
};

class Car
{
	std::string make;
	std::string model;
	std::string numberPlate;
	Colour::Colour colour;
	int milage;

public:
	Car(std::string iMake, std::string iModel, std::string iNumberPlate, Colour::Colour iColour, int iMilage)
	{
		make = iMake;
		model = iModel;
		numberPlate = iNumberPlate;
		colour = iColour;
		milage = iMilage;
	};

	std::string getMake()
	{
		return make;
	}
};

int main()
{
	Car myCar("Ford", "Fiesta", "AY57 ZYJ", Colour::black, 45000);

	std::cout << myCar.getMake() << std::endl;

	return 0;
}
