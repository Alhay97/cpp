#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class Bureaucrat;

 class ShrubberyCreationForm  : public AForm
{
	private:
		std::string target;

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string &_target);
		ShrubberyCreationForm(ShrubberyCreationForm& shrub);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm& shrub);
		~ShrubberyCreationForm();

		std::string const &getTarget();

		struct emptyTarget : std::exception
		{
			const char* what() const throw();
		};

		virtual void execute(Bureaucrat const & executor) const;
};

#endif




