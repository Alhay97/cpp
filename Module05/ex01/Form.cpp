#include "Form.hpp"
Form::Form() : name ("default name"), signature(false)
{
}
Form::Form(const std::string &_name,bool _signature,int _grade_sign,int _grade_exec)
{

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

}

bool Form::getSignature() const
{

}
