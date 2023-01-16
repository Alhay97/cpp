#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"
class Bureaucrat;

class RobotomyRequestForm : public AForm
{
	private:
		std::string target;
		RobotomyRequestForm();

	public:
		RobotomyRequestForm(std::string &_target);
		RobotomyRequestForm(RobotomyRequestForm& robo);
		RobotomyRequestForm& operator=(RobotomyRequestForm& robo);
		~RobotomyRequestForm();
		std::string GetTarget();
		virtual void execute(Bureaucrat const & executor);

};

#endif
