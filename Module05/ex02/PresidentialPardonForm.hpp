#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"
class PresidentialPardonForm
{
	private:
	
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(/*add arg*/);
		PresidentialPardonForm(PresidentialPardonForm& president);
		PresidentialPardonForm& operator=(PresidentialPardonForm& president);
		~PresidentialPardonForm();
};

#endif
