#include "Form.hpp"

Form::Form() : name ("default name"), grade_sign(0), grade_exec(0)
{
	this->signature = false;
	return ;
}

Form::Form(const std::string &_name,int _grade_sign,int _grade_exec) : name(_name),grade_sign(_grade_sign),
																		grade_exec(_grade_exec)

{
	if (grade_exec > 0 && grade_sign > 0 && grade_exec < 151 && grade_sign < 151)
		std::cout << "Form " << this->name << " with signing grade " << this->grade_sign << std:: endl;
	else if(grade_exec < 1 | grade_sign < 1)
		throw Form::GradeTooHighException();
	else if( grade_exec > 150| grade_sign > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form& form) : name(form.name), grade_sign(form.grade_sign),
							grade_exec(form.grade_exec)

{
	this->signature = false;
	return ;

}

Form& Form::operator=(Form& form)
{
	if (this != &form)
		this->signature =form.signature;
	return (*this);
}

void Form::beSigned(Bureaucrat &cat)
{
	if(this->getSignature() == true)
		std::cout << "Form already signed" << std::endl;

	if (this->getGradeSign() >= cat.getGrade())
	{
		this->signature = true;
		std::cout << "the Form signed successfully" << std::endl;
	}
}

Form::~Form()
{
	std::cout << "Form Destructor has been called" << std::endl;
	return ;
}

std::string const &Form::getName() const
{
	return(this->name);
}

bool const &Form::getSignature() const
{
	return(this->signature);
}

int const &Form::getGradeSign( ) const
{
	return (this->grade_sign);
}

int const &Form::getGradeExec() const
{
	return(this->grade_exec);
}

const char * Form::GradeTooLowException::what () const throw ()
{
	return "grade To Low";
}

const char * Form::GradeTooHighException::what () const throw ()
{
	return "grade To High";
}


std::ostream& operator<<(std::ostream& outs, const Form &src)
{
	outs <<"[Form] name: " << src.getName() << std::endl;
	outs << "[Form] sign grade: " << src.getSignature() << std::endl;
	outs << "[Form] exec grade: " << src.getGradeExec() << std::endl;
	outs<< "[Form] sign status: " << src.getSignature();
    return outs;
}
