#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm",72, 45)
{
	this->target = "Default target";
}
RobotomyRequestForm::RobotomyRequestForm(std::string &_target) : AForm("RobotomyRequestForm",72, 45)
{
	this->target = _target;
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& robo) : AForm("RobotomyRequestForm",72, 45)
{
	this->target = robo.GetTarget();
}
RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm& robo)
{
	this->target = robo.GetTarget();
	return(*this);
}
RobotomyRequestForm::~RobotomyRequestForm()
{

}

std::string RobotomyRequestForm::GetTarget()
{
	return (this->target);
}


