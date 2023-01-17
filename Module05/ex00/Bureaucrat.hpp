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


		std::string const & getName() const;
		int const &getGrade() const;

		void incrementGrade(const int amount);
		void decrementGrade(const int amount);

		class GradeTooHighException : public std::exception
		{
			const char * what () const throw ();
		};

		class GradeTooLowException : public std::exception
		{

			const char * what () const throw ();
		};
};

std::ostream& operator<<(std::ostream& out, Bureaucrat const& cat);


#endif
