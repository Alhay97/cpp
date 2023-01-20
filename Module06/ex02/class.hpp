#include "base.hpp"
#include <iostream
#include <cstdlib>
#include <ctime>

class A : public Base
{
    A();
    A(const A &a_copy)
    A operator=(const A &a_source);
    virtual ~A();
};

class B : public Base
{
    B();
    B(const B &b_copy)
    B operator=(const B &b_source);
    ~B();
};

class C : public Base
{
    C();
    C(const C &c_copy)
    C operator=(const C &c_source);
    ~C();
};