#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Monkey")
{
	std::cout << "WrongAnimal default constructor  is called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal& ab)
{
	std::cout << "WrongAnimal Copy constructor is called" << std::endl;
	*this = ab;
}

WrongAnimal::WrongAnimal(std::string _type) : type(_type)
{
	std::cout << "WrongAnimal Overload Constructor has been called" << std::endl;
	this->type = _type;
}

std::string WrongAnimal::getType() const
{
	return (type);
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal & ab)
{
	std::cout << "WrongAnimal copy assigment operator has been called" << std::endl;
	if(this != &ab)
		this->type = ab.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor is called" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "oOoOo AaAaA" << std::endl;
}
