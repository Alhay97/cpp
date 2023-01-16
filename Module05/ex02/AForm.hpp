#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
class Bureaucrat;
class AForm
{
	private:
		const std::string name;
		bool signature;
		const int grade_sign;
		const int grade_exec;

	public:
		AForm();
		AForm(const std::string &_name,int _grade_sign,int _grade_exec);
		AForm(AForm& Aform);
		AForm& operator=(AForm& Aform);
		~AForm();

		std::string getName() const;
		bool getSignature() const;
		int getGradeSign( ) const;
		int getGradeExec() const;

		void beSigned(Bureaucrat &cat);

		class GradeTooHighException : public std::exception
		{
			const char * what () const throw ()
			{
				return "[AForm] Grade To High";
			}
		};
		class GradeTooLowException : public std::exception
		{

			const char * what () const throw ()
			{
				return "[AForm] Grade To Low";
			}
		};
};

std::ostream& operator<<(std::ostream& out, AForm const& aform);

#endif
