#include "literal.hpp"


Literals::Literals() : storage(NULL), arg(NULL), 
                        chare(0), num_int(0), num_float(0), num_double(0)
{

}

Literals::Literals(char *store) 
{
    this->storage = store;
    this->arg = store;
    try {
    this->converter();
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
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
        this->num_float = source.num_float;
        this->num_double = source.num_double;
    }
    return (*this);
}
Literals::~Literals()
{
    
}

void Literals::converter()
{
    if ((this->storage.length() == 1) && (this->storage[0] < '0' || this->storage[0] > '9'))
    {
        this->chare = this->storage[0];
        this->num_int = static_cast<int>(storage[0]);
        this->num_float = static_cast<float>(storage[0]);
        this->num_double = static_cast<double>(storage[0]);
    }
    else if (is_number() || this->storage == "nan" || this->storage == "nanf" || this->storage == "impossible" || this->storage == "inff"
                || this->storage == "-inf" || this->storage == "+inf" || this->storage == "+nanf" || this->storage == "-nanf" )
    {
        this->chare = static_cast<char>(strtod(arg , 0));
        this->num_int = static_cast<int>(strtod(arg , 0));
        this->num_float = static_cast<float>(strtod(arg , 0));
        this->num_double = static_cast<double>(strtod(arg , 0));
    }
    else
        throw std::invalid_argument("invalid arguments taken");
}

void Literals::printToChar() const
{
    std::cout << "Charecter: "; 
    if(std::isnan(num_double) || std::isinf(num_double))
        std::cout << "Imposiible" << std::endl;
    else if(isprint(this->chare) == 0 )
        std::cout << "Cannot be displayed" <<std::endl;
    else
        std::cout << this->chare << std::endl;
}

void Literals::printToInt() const
{
    std::cout << "Int: "; 
    if(std::isnan(num_double) || std::isinf(num_double))
        std::cout << "Imposiible" << std::endl;
    else
        std::cout << " / "<<this->num_int << " / "<<std::endl;
}

void Literals::printToFloat() const
{
    std::cout << "Float: " << this->num_float;
    if (this->num_float - this->num_int == 0)
        std::cout << ".0";
    std::cout << "f" << std::endl;
}

void Literals::printToDouble() const
{
    std::cout << "Double: " <<this->num_double;
    if (this->num_double - this->num_int == 0)
        std::cout << ".0";
    std::cout << std::endl;
}

void Literals::printter() const
{
    this->printToChar();
    this->printToInt();
    this->printToDouble();
    this->printToFloat();
}

bool	Literals::is_number(void) const
{
	std::string s = this->arg;
	std::string::iterator	i = s.begin();
	while (std::isdigit(*i) && i != s.end())
		++i;
	if (*i == '.' && i != s.end())
	{
		++i;
		while (std::isdigit(*i) && i != s.end())
			++i;
		if (*i == 'f' && i != s.end())
			++i;
	}
	return (i == s.end() && *--i != '.' && !s.empty());
}