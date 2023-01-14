#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{

}

Bureaucrat::Bureaucrat(const std::string _name,int _grade) : name(_name),
															grade(_grade)
{

}

Bureaucrat::Bureaucrat(Bureaucrat& bcat)
{

}

Bureaucrat& Bureaucrat::operator=(Bureaucrat& bcat)
{

}

Bureaucrat::~Bureaucrat()
{

}

std::string Bureaucrat::getName()
{
	return(name);
}

int Bureaucrat::getGrade()
{
	return(grade);
}

void Bureaucrat::incrementGrade++(const int amount)
{

}

void Bureaucrat::decrementGrade--(const int amount)
{

}
