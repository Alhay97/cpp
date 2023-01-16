#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"
class PresidentialPardonForm : public AForm
{
	private:
		std::string target;

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string &_target);
		PresidentialPardonForm(PresidentialPardonForm& president);
		PresidentialPardonForm& operator=(PresidentialPardonForm& president);
		~PresidentialPardonForm();
		std::string GetTarget();
		virtual void execute(Bureaucrat const & executor);
		struct emptyTarget : std::exception
		{
			const char* who() const throw()
			{
				return "there is no target available";
			}
		};

};

#endif
