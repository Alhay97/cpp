#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"
class Bureaucrat;

class RobotomyRequestForm : public AForm
{
	private:
		std::string target;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string &_target);
		RobotomyRequestForm(RobotomyRequestForm& robo);
		RobotomyRequestForm& operator=(RobotomyRequestForm& robo);
		~RobotomyRequestForm();

		std::string const &GetTarget();

		virtual void execute(Bureaucrat const & executor) const;

		struct emptyTarget : std::exception
		{
			const char* what() const throw();
		};


};

#endif
