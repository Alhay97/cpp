#include <iostream>


typedef struct t_name
{
	std::string f_name;
	std::string l_name;
	std::string p_number;
	std::string secret;
}s_name;


int main()
{
	t_name person[3];
	int x = 0;
	while (x < 3)
	{
		std::cout << "Enter first name: ";
		std::cin >> person[x].f_name;
		std::cout << "Enter last name:";
		std::cin >> person[x].l_name;
		std::cout << "Enter phone number: ";
		std::cin >> person[x].p_number;
		std::cout << "Enter dark secret: ";
		std::cin >> person[x].secret;
		std::cout << std::endl;
		x++;
		
	}
	int i = 0;
	while(i < 3)
	{
		std::cout << person[i].f_name<< " " << person[i].l_name << " "<< person[i].p_number << std::endl;
		i++;
	}
	return 0;
}