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

		virtual ~AForm();

		std::string const &getName() const;
		bool const &getSignature() const;
		int const &getGradeSign( ) const;
		int const &getGradeExec() const;

		void beSigned(Bureaucrat &cat);

		virtual void	execute(const Bureaucrat& exec) const = 0 ;

		class GradeTooHighException : public std::exception
		{
			public:
				const char * what () const throw ();

		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char * what () const throw ();
		};
};

std::ostream& operator<<(std::ostream& out, AForm const& aform);

#endif
