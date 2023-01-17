#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
class Bureaucrat;
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

		std::string const &getName() const;
		bool const &getSignature() const;
		int const &getGradeSign( ) const;
		int const &getGradeExec() const;

		void beSigned(Bureaucrat &cat);

		class GradeTooHighException : public std::exception
		{
			const char * what () const throw ();
		};
		class GradeTooLowException : public std::exception
		{

			const char * what () const throw ();
		};
};

std::ostream& operator<<(std::ostream& out, Form const& form);

#endif
