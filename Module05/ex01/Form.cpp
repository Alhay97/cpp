#include "Form.hpp"
Form::Form() : name ("default name"), grade_exec(0), grade_sign(0)
{
	this->signature = false;
	return ;
}
Form::Form(const std::string &_name,bool _signature,int _grade_sign,int _grade_exec) : name(_name),
																						grade_exec(_grade_exec),
																						grade_sign(_grade_sign)
{
	if()

}

Form::Form(Form& form)
{
	
}

Form& Form::operator=(Form& form)
{

}

Form::~Form()
{

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
