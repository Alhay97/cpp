#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string name;
		bool signature;
		const int grade_sign;
		const int grade_exec;

	public:
		Form();
		Form(const std::string &_name,bool _signature,int _grade_sign,int _grade_exec);
		Form(Form& form);
		Form& operator=(Form& form);
		~Form();
		std::string getName() const;
		bool getSignature() const;
		int getGradeSign( ) const;
		int getGradeExec() const;
};

#endif
