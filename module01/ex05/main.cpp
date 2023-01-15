#include "Harl.hpp"


int main()
{
	Harl harl;
	std::string complain;

	std::cout << "Enter complain: ";
	std::cin >> complain;
	std::cout << std::endl;
	harl.complain(complain);

	return 0;


}
