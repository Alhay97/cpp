#include "Array.hpp"

int main( void )
{
	Array<int>			intArray;
	Array<std::string>	stringArray(10);
	Array<std::string>	otherStringArray;

	stringArray[0] = "Green";
	stringArray[1] = "Blue";
	stringArray[2] = "Pastel";
	stringArray[3] = "Patel";
	stringArray[4] = "White";
	stringArray[5] = "Green";
	std::cout << "intArray.size() = " << intArray.size() << std::endl;
	std::cout << "stringArray.size() = " << stringArray.size() << std::endl;
	otherStringArray = stringArray;
	otherStringArray[3] = "Burger";
	std::cout << stringArray[3] << std::endl;
	std::cout << otherStringArray[3] << std::endl;
	try
	{
		std::cout << stringArray[59] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << stringArray[-3] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
