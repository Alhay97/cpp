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
		PresidentialPardonForm(const std::string &_target);
		PresidentialPardonForm(PresidentialPardonForm& president);
		PresidentialPardonForm& operator=( PresidentialPardonForm& president);
		~PresidentialPardonForm();

		std::string const &GetTarget();
		virtual void execute(Bureaucrat const & executor) const;
		struct emptyTarget : std::exception
		{
			const char* what() const throw();
		};

};

#endif
