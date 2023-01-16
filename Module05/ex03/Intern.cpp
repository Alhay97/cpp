#include "Intern.hpp"

Intern::Intern()
{

}

Intern::Intern(const Intern& intern)
{
    *this = intern;
}

Intern &Intern::operator=(const Intern &sauce)
{
    (void)sauce;
    return *this;
}

Intern::~Intern()
{

}
        
AForm *Intern::makeForm(const std::string &formName, const std::string &target) const
{
    std::string forums[] = {
        "presidential",
        "robotomy",
        "shrubbery"
    };

    AForm *form = NULL;
    int index = 0 ;
    while( index < 3)
    {
        if (formName == forums[index])
        {
            switch(index)
            {
                case 0:
                    form = new PresidentialPardonForm(target);
                    break;
                case 1:
                    form = new RobotomyRequestForm(target);
                    break;
                case 2:
                    form = new ShrubberyCreationForm(target);
                    break;
            }
        }
        index++;
    }
    if (form == NULL)
        std::cout << "[Intern] " << formName << "Form doesnt exist" << std::endl;
    else 
        std::cout << "Intern created " << formName << std::endl;

    return form;

}