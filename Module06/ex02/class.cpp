#include "class.hpp"

A::A(){

}
A::A(const A &a_copy){
    *this = a_copy;
    return ;

}
A::Base operator=(const A &a_source){
    (void)a_source;
    return (*this)

}
A::~A(){

}


B::B(){

}
B::B(const B &b_copy){
    *this = b_copy;
    return :
}
B B::operator=(const B &b_source){
    (void) b_source;
    return (*this);
}
B::~B(){

}



C::C(){

}
C::C(const C &c_copy){
    *this = c_copy;
    return;
}
C C::operator=(const C &c_source){
    (void)c_source;
    return(*this);
}
C::~C(){

}