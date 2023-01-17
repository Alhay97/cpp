#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default name")
{
	this->grade = 150;
}



Bureaucrat::Bureaucrat(const std::string &_name,int _grade) : name(_name),
															grade(_grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
		return ;
}

Bureaucrat::Bureaucrat(Bureaucrat& bcat) : name(getName())
{
	this->grade = bcat.grade;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat& bcat)
{
	this->grade = bcat.grade;
	return(*this);
}

Bureaucrat::~Bureaucrat()
{

}

std::string const  &Bureaucrat::getName() const
{
	return(name);
}

int const &Bureaucrat::getGrade() const
{
	return(grade);
}

void Bureaucrat::incrementGrade(const int amount)
{
	if (grade - amount < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade - amount > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade -= amount;

}

void Bureaucrat::decrementGrade(const int amount)
{
	if (grade + amount < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade + amount > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade += amount;
}


std::ostream& operator<<(std::ostream& out, Bureaucrat const &bur)
{
	out << bur.getName() << ", bureaucrat grade " << bur.getGrade();
    return out;
}

const char * Bureaucrat::GradeTooLowException::what () const throw ()
{
	return "grade To Low";
}

const char * Bureaucrat::GradeTooHighException::what () const throw ()
{
	return "grade To High";
}
