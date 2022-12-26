#include <iostream>
#include "phonebook.hpp"

void Phonebook::infinte_getline()
{
    std::string ab;
    int i = 0;
    while (1)
    {
		std::cout << "Enter command: ";
        getline(std::cin, ab);
        if (ab == "EXIT")
            break;
        else if (ab == "ADD")
        {
            std::string tmp = "";
			std::cout << "Enter first name: ";
            getline(std::cin, tmp);
            person[i].set_fname(tmp);
			std::cout << "Enter last name: ";
            getline(std::cin, tmp);
            person[i].set_lname(tmp);
			std::cout << "Enter phone number: ";
            getline(std::cin, tmp);
            person[i].set_phone(tmp);
			std::cout << "Enter instagram account: ";
            getline(std::cin, tmp);
            person[i].set_insta(tmp);
			std::cout << "Enter your Secret: ";
            getline(std::cin, tmp);
            person[i].set_secret(tmp);
			person[i].filled = true;
            i++;
        }
        else if (ab == "SEARCH")
        {
			print_table();
			info_print();
        }
    }
}

void print_table(void)
{
	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|  index   |first name|last  name|  insta   |" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl;

}

void space(std::string varia)
{
	if (varia.length() >= 10)
	{

	}
}

void Phonebook::info_print(void)
{
	int i = 0;

	while (i >= 0 && i < 8)
	{
		if (person[i].filled == true)
		{
			std::cout << "|" << i+1 << "|" << person[i].get_fname() << "|"<< person[i].get_lname() <<"|" <<  person[i].get_insta() << "|" << std::endl;
			std::cout << "|__________|__________|__________|__________|" << std::endl;
		}
		i++;
	}

}

int main()
{
	Phonebook person;
	person.infinte_getline();
}
