#include <iostream>

class PhoneBook
{
	public:
		char *first_name;
		char *last_name;
		char *nickname;
		char *phonenumber;
		char *darkest_secret;
};

int main()
{
	PhoneBook person[3];
	int x = 0;
	while (x < 3)
	{
		std::cout << "Enter first name: ";
		std::cin >> person[x].first_name;
		std::cout << "Enter last name:";
		std::cin >> person[x].last_name;
		std::cout << "Enter phone number: ";
		std::cin >> person[x].phonenumber;
		std::cout << "Enter dark secret: ";
		std::cin >> person[x].darkest_secret;
		std::cout << std::endl;
		x++;

	}
	int i = 0;
	while(i < 3)
	{
		std::cout << person[i].first_name<< " " << person[i].last_name << " "<< person[i].phonenumber << std::endl;
		i++;
	}
	return 0;
