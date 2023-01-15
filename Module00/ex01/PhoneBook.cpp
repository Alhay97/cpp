#include "phonebook.hpp"

void Phonebook::infinte_getline()
{
    std::string command;
    int i = 0;
    while (1)
    {
			std::cout << "Enter command: ";
			getline(std::cin, command);
			if (command == "EXIT")
				break;
			else if (command == "ADD")
			{
				std::string tmp = "";
				do{
					std::cout << "Enter first name: ";
					getline(std::cin, tmp);
				}while (tmp.size() < 1);
				person[i].set_fname(tmp);
				do{
					std::cout << "Enter last name: ";
					getline(std::cin, tmp);
				}while (tmp.size() < 1);
				person[i].set_lname(tmp);
				do{
					std::cout << "Enter phone number: ";
					getline(std::cin, tmp);
				}while (tmp.size() < 1);
				person[i].set_phone(tmp);
				do{
					std::cout << "Enter instagram account: ";
					getline(std::cin, tmp);
				}while (tmp.size() < 1);
				person[i].set_insta(tmp);
				do{
					std::cout << "Enter your Secret: ";
					getline(std::cin, tmp);
				}while (tmp.size() < 1);
				person[i].set_secret(tmp);
				person[i].filled = true;
				i++;
			}
			else if (command == "SEARCH")
			{
				std::string st;
				print_table();
				info_print();
				std::cout << "Enter 1 to view full user information and Enter 0 if exit"<< std::endl;
				getline(std::cin, st);
				if (st == "1")
					{
						char *end;
						std::string st1 = "";
						std::cout << "Enter index number: ";
						getline(std::cin, st1);
						user_info(std::strtol(st1.c_str(),&end,10)-1);

					}
				else if (st == "0")
					;
					// break;
				else
				{
					std::cout << "invalid option!!";
					// break;
				}

		}
    }
}

void print_table(void)
{
	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|  index   |first name|last  name|  insta   |" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl;
}

void Phonebook::user_info(int index)
{
	std::cout << "Name: " <<person[index].get_fname() << " ";
	std::cout << person[index].get_lname() << std::endl;
	std::cout << "Phone number: " <<person[index].get_num() << std::endl;
	std::cout << "Instagram account: @" <<person[index].get_insta() << std::endl;
	std::cout << "Your Secret: "<<person[index].get_sec() << std::endl;
}

std::string space(std::string varia)
{
	int len = varia.length();
	while(len < 10)
	{
		varia.append(" ");
		len ++;
	}
	return (varia);
}

void Phonebook::info_print(void)
{
	int i = 0;

	while (i >= 0 && i < 8)
	{
		if (person[i].filled == true)
		{
			std::cout << "|" << i+1 <<  "         "  << "|";
			std::cout << space(person[i].get_fname()) << "|";
			std::cout << space(person[i].get_lname()) << "|";
			std::cout <<  space(person[i].get_insta()) << "|" << std::endl;
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
