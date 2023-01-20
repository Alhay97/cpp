#include <iostream>

#ifndef BASE_HPP
# define BASE_HPP

class Base
{

    public:
        Base();
        Base(const Base &base_copy)
        Base operator=(const Base &base_source);
        virtual ~Base();
};

Base * generate(void);

void identify(Base* p);

void identify(Base& p);

#endif