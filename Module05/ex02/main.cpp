#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	std::cout << "start" << std::endl;
	AForm			*form = NULL;
	Bureaucrat		bob("bob", 1);
	Bureaucrat		phil("phil", 40);
	Bureaucrat		luc("luc", 150);


	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "TEST1" << std::endl;
	try
	{
		form = new PresidentialPardonForm("28Z");
		form->execute(bob);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		if (form)
			delete form;
	}

	try
	{
		form = new PresidentialPardonForm("28A");
		form->beSigned(bob);
		form->execute(bob);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		if (form)
			delete form;
	}


	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "TEST2" << std::endl;
	try
	{
		form = new RobotomyRequestForm("28B");
		form->beSigned(bob);
		form->execute(phil);
		form->execute(phil);
		form->execute(phil);
		form->execute(phil);
		form->execute(phil);
		form->execute(phil);
		form->execute(phil);
		form->execute(phil);
		form->execute(phil);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		if (form)
			delete form;
	}


	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "TEST3" << std::endl;
	try
	{
		form = new ShrubberyCreationForm("28C");
		form->beSigned(bob);
		form->execute(phil);
		form->execute(luc);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		if (form)
			delete form;
	}

	std::cout << std::endl;
	std::cout << std::endl;
	return 0;
}