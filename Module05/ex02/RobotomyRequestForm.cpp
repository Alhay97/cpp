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

void RobotomyRequestForm::execute(Bureaucrat const & executor)
{
	if(this->target.empty())
		throw RobotomyRequestForm::emptyTarget();
	else if(executor.getGrade() > this->getGradeExec())
		throw GradeTooLowException();
	std::cout << "zzzzzzzzzzzzzzzzzzzzzz"<<std::endl;
	std::cout << "(Drill Sound"<< std::endl;

	if(rand() % 2 == 1)
		std::cout << this->target << " has robotomized successfully 50\% of the time." << std::endl;
	else
		std::cout << this->target << " has not robotomized successfully 50\% of the time." << std::endl;


}
