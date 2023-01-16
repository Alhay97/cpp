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

		std::string getTarget();

		struct emptyTarget : std::exception
		{
			const char* who() const throw()
			{
				return "there is no target available";
			}
		};
		
		virtual void execute(Bureaucrat const & executor) const;
};

#endif




