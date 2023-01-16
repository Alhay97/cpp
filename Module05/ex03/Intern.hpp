#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern : public Bureaucrat
{
    public:
        Intern();
        Intern(const Intern& intern);
        Intern &operator=(const Intern &intern);
        ~Intern();
        
        AForm *makeForm(const std::string &formName, const std::string &target) const;
};

#endif