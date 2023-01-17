#include "AForm.hpp"

AForm::AForm() : name ("default name"), grade_sign(0), grade_exec(0)
{
	this->signature = false;
	return ;
}

AForm::AForm(const std::string &_name,int _grade_sign,int _grade_exec) : name(_name),grade_sign(_grade_sign),
																		grade_exec(_grade_exec)

{
	if (grade_exec > 0 && grade_sign > 0 && grade_exec < 151 && grade_sign < 151)
		std::cout << "AForm " << this->name << " with signing grade " << this->grade_sign << std:: endl;
	else if(grade_exec < 1 | grade_sign < 1)
		throw AForm::GradeTooHighException();
	else if( grade_exec > 150| grade_sign > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(AForm& form) : name(form.name), grade_sign(form.grade_sign),
							grade_exec(form.grade_exec)

{
	this->signature = false;
	return ;

}

AForm& AForm::operator=(AForm& form)
{
	if (this != &form)
		this->signature =form.signature;
	return (*this);
}

void AForm::beSigned(Bureaucrat &cat)
{
	if(this->getSignature() == true)
		std::cout << "AForm already signed" << std::endl;

	if (this->getGradeSign() >= cat.getGrade())
	{
		this->signature = true;
		std::cout << "the AForm signed successfully" << std::endl;
	}
}

AForm::~AForm()
{
	std::cout << "AForm Destructor has been called" << std::endl;
	return ;
}

std::string const &AForm::getName() const
{
	return(this->name);
}

bool const &AForm::getSignature() const
{
	return(this->signature);
}

int const &AForm::getGradeSign( ) const
{
	return (this->grade_sign);
}

int const &AForm::getGradeExec() const
{
	return(this->grade_exec);
}

std::ostream& operator<<(std::ostream& outs, const AForm &src)
{
	outs <<"[AForm] name: " << src.getName() << std::endl;
	outs << "[AForm] sign grade: " << src.getSignature() << std::endl;
	outs << "[AForm] exec grade: " << src.getGradeExec() << std::endl;
	outs<< "[AForm] sign status: " << src.getSignature();
    return outs;
}
