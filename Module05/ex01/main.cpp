#include "Bureaucrat.hpp"


int main()
{

	std::cout << std::endl;
	std::cout << "#-------------------[1]------------------------#" << std::endl;
	{
		Bureaucrat bureaucrat("alhai", 44);
		Form form("Form_1", 43, 12);
		bureaucrat.signForm(form);
		std::cout << form << std::endl;
	}

	std::cout << std::endl;
	std::cout << "#-------------------[2]------------------------#" << std::endl;
	{
		Bureaucrat bureaucrat("staff", 44);
		Form form("Form_2", 46, 12);
		bureaucrat.signForm(form);
		std::cout << form << std::endl;
	}
}

