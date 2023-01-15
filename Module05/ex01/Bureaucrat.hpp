#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

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
		class GradeTooHighException : public std::exception
		{
			const char * what () const throw ()
			{
				return "grade To High";
			}
		};
		class GradeTooLowException : public std::exception
		{

			const char * what () const throw ()
			{
				return "grade To Low";
			}
		};
		void incrementGrade(const int amount);
		void decrementGrade(const int amount);
};

std::ostream& operator<<(std::ostream& out, Bureaucrat const& cat);


#endif
