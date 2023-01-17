#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default name")
{
	this->grade = 150;
}

std::string const &Bureaucrat::getName() const
{
	return(name);
}

int const &Bureaucrat::getGrade() const
{
	return(grade);
}


const char* Bureaucrat::GradeTooHighException::what() const throw ()
			{
				return "grade To High";
			}

const char* Bureaucrat::GradeTooLowException::what() const throw ()
			{
				return "grade To Low";
			}

void Bureaucrat::executeForm(AForm &form) const
{
	try
	{
		form.execute(*this);
		std::cout << this->name << "  execute " << form.getName() <<"\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

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

void Bureaucrat::signForm(AForm &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signed [form]: " << form.getName() <<  std::endl;
	}
	catch(const std::exception& exec)
	{

		std::cout << this->getName() << " couldn't sign " <<
		form.getName() <<  " because " << exec.what() << '\n';
	}

}


std::ostream& operator<<(std::ostream& out, Bureaucrat const &bur)
{
	out << bur.getName() << ", bureaucrat grade " << bur.getGrade();
    return out;
}
