#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string name;
		bool signature;
		const int grade_sign;
		const int grade_exec;

	public:
		Form();
		Form(const std::string &_name,int _grade_sign,int _grade_exec);
		Form(Form& form);
		Form& operator=(Form& form);
		~Form();

		std::string getName() const;
		bool getSignature() const;
		int getGradeSign( ) const;
		int getGradeExec() const;

		void beSigned(Bureaucrat &cat);

		class GradeTooHighException : public std::exception
		{
			const char * what () const throw ()
			{
				return "[Form] Grade To High";
			}
		};
		class GradeTooLowException : public std::exception
		{

			const char * what () const throw ()
			{
				return "[Form] Grade To Low";
			}
		};
};

std::ostream& operator<<(std::ostream& out, Form const& form);

#endif
