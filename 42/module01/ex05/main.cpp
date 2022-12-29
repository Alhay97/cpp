#include "Harl.hpp"


int main()
{
	Harl harl;
	std::string complain;

	std::cout << "Enter complain: ";
	std::cin >> complain;
	std::cout << std::endl;
	if (complain == "DEBUG")
		harl.complain("DEBUG");
	else if (complain == "INFO")
		harl.complain("INFO");
	else if (complain == "WARNING")
		harl.complain("WARNING");
	else if(complain == "DEBUG")
		harl.complain("complain");
	else
		std::cout << "Invalid Arguments";

	return 0;
}
