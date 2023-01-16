#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"
class Bureaucrat;
class RobotomyRequestForm
{
	private:
	
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(/*add arg*/);
		RobotomyRequestForm(RobotomyRequestForm& robo);
		RobotomyRequestForm& operator=(RobotomyRequestForm& robo);
		~RobotomyRequestForm();

};

#endif
