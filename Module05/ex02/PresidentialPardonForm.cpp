#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm",25,5)
{
	this->target = "Default target";
}
PresidentialPardonForm::PresidentialPardonForm(std::string &_target) : AForm("PresidentialPardonForm",25,5)
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

}

std::string PresidentialPardonForm::GetTarget()
{
	return (this->target);
}


