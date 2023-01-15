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
		Form(const std::string &_name,bool _signature);
		Form(Form& form);
		Form& operator=(Form& form);
		~Form();
		std::string getName() const;
		bool getSignature() const;
};

#endif
