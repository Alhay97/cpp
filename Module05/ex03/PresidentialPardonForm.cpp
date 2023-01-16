#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm",25,5)
{
	this->target = "Default target";
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &_target) : AForm("PresidentialPardonForm",25,5)
{
	this->target = _target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& president) : AForm("PresidentialPardonForm",25,5)
{
	this->target = president.GetTarget();
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm& president)
{
	this->target = president.GetTarget();
	return(*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	return ;
}

std::string PresidentialPardonForm::GetTarget()
{
	return (this->target);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const 
{
	if(this->target.empty())
		throw PresidentialPardonForm::emptyTarget();
	else if(executor.getGrade() > this->getGradeExec())
		throw GradeTooLowException();
	std::cout << this->target<<"has been pardoned by Zaphod Beeblebrox." << std::endl;
}

