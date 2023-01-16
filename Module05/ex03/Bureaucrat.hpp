#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		const std::string name;
		int grade;

	public:
		Bureaucrat();
		Bureaucrat(const std::string &_name,int _grade);
		Bureaucrat(Bureaucrat& bcat);
		Bureaucrat& operator=(Bureaucrat& bcat);
		~Bureaucrat();

		std::string getName() const;
		int getGrade() const;

		void signForm(AForm &form);
		void executeForm(AForm &form) const;

	public:
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
		void incrementGrade(const int amount);
		void decrementGrade(const int amount);
};

std::ostream& operator<<(std::ostream& out, Bureaucrat const& cat);


#endif
