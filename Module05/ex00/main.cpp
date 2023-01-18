#include "Bureaucrat.hpp"


#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat	test1("alhai", 2);
		std::cout << test1 << std::endl;
		test1.decrementGrade(1);
		std::cout << test1 << std::endl;
		test1.incrementGrade(2);
		std::cout << test1 << std::endl;
		test1.decrementGrade(10);
		std::cout << test1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat	test4("Tester name", 151);
		test4.incrementGrade(2);
		std::cout << test4 << std::endl;
		Bureaucrat	test5("Tester name", 0);
		std::cout << test5 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}

