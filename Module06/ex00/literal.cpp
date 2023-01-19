#include "literal.hpp"


Literals::Literals() : storage(NULL), arg(NULL), 
                        chare(0), num_int(0), num_float(0), num_double(0)
{

}

Literals::Literals(char *store) 
{
    this->storage = store;
    this->arg = store;
}

Literals::Literals(Literals &copy)
{
    *this = copy;
}
Literals &Literals::operator=(Literals &source)
{
    if(this != &source)
    {
        this->arg = source.arg;
        this->storage = source.storage;
        this->chare = source.chare;
        this->num_int = source.num_int;
        this->num_float = source.num_float
        this->num_double = source.num_double;
    }
    return (*this);
}
Literals::~Literals()
{
    
}

void Literals::converter()
{
    if (this->storage.length() == 1 && this->storage[0] < '0' || this->storage[0] > '9')
    {
        this->chare = this->storage[0];
        this->num_int = static_cast<int>(storage[0]);
        this->num_float = static_cast<float>(storage[0]);
        this->num_double = static_cast<double>(storage[0]);
    }
    else if (this->storage == "nan" || this->storage == "nanf" || this->storage == "impossible" || this->storage == "inff"
                || this->storage == "-inf" || this->storage == "+inf" || this->storage == "+nanf" || this->storage == "-nanf" )
    {
        this->chare = strtod(arg , 0);
        this->num_int = static_cast<int>(strtod(arg , 0));
        this->num_float = static_cast<float>(strtod(arg , 0));
        this->num_double = static_cast<double>(strtod(arg , 0));
    }
    else
        throw std::invalid_argument("invalid arguments taken");
}


void Literals::printToChar()
{

}
void Literals::printToInt()
{

}
void Literals::printToFloat()
{

}
void Literals::printToDouble()
{

}

