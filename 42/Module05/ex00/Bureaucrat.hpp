#ifndef BUREAUCRAT
#define BUREAUCRAT

#include <iostream>

class Bureaucrat
{
	private:
		const std::string name;
		int grade;

	public:
		Bureaucrat();
		Bureaucrat(const std::string _name,int _grade);
		Bureaucrat(Bureaucrat& bcat);
		Bureaucrat& operator=(Bureaucrat& bcat);
		~Bureaucrat();
		std::string getName();
		int getGrade();
		void incrementGrade++(const int amount);
		void decrementGrade--(const int amount);
};


#endif
