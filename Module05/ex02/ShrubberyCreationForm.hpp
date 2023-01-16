#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"
// #include "AForm.hpp"

class ShrubberyCreationForm :: //public Aform
{
	private:
		std::string target;
		ShrubberyCreationForm();

	public:
		ShrubberyCreationForm(/*add arg*/);
		ShrubberyCreationForm(ShrubberyCreationForm& shrub);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm& shrub);
		~ShrubberyCreationForm();
};

#endif




