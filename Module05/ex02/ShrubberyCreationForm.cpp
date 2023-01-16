#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm",145, 137)
{
	this->target = "Default target";
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string &_target) : AForm("ShrubberyCreationForm",145, 137)
{
	this->target = _target;
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& shrub) :  AForm("ShrubberyCreationForm",145, 137)
{
	this->target = shrub.getTarget();

}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm& shrub)
{
	this->target = shrub.getTarget();
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

std::string ShrubberyCreationForm::getTarget()
{
	return (this->target);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
	if (this->target.empty())
		throw ShrubberyCreationForm::emptyTarget();
	else if (executor.getGrade() > this->getGradeExec())
		throw GradeTooLowException();
	// continue code

}
