#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class Bureaucrat;

 class ShrubberyCreationForm  : public AForm
{
	private:
		std::string target;
		ShrubberyCreationForm();

	public:
		ShrubberyCreationForm(std::string &_target);
		ShrubberyCreationForm(ShrubberyCreationForm& shrub);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm& shrub);
		~ShrubberyCreationForm();
		std::string getTarget();
		virtual void execute(Bureaucrat const & executor);
};

#endif




