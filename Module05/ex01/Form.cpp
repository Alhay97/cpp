#include "Form.hpp"
Form::Form() : name ("default name"), grade_exec(0), grade_sign(0)
{
	this->signature = false;
	return ;
}
Form::Form(const std::string &_name,int _grade_sign,int _grade_exec) : name(_name),
																		grade_exec(_grade_exec),
																		grade_sign(_grade_sign)
{
	if (grade_exec > 0 && grade_sign > 0 && grade_exec < 151 && grade_sign < 151)
		std::cout << "Form " << this->name << " with signing grade " << this->grade_sign << std:: endl;
	else if(grade_exec < 1 | grade_sign < 1)
		throw Form::GradeTooHighException();
	else if( grade_exec > 150| grade_sign > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form& form) : name(form.name), grade_exec(form.grade_exec),
						grade_sign(form.grade_sign)
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

std::string Form::getName() const
{
	return(this->name);
}

bool Form::getSignature() const
{
	return(this->signature);
}

int Form::getGradeSign( ) const
{
	return (this->grade_sign);
}

int Form::getGradeExec() const
{
	return(this->grade_exec);
}
