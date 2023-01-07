#include "WrongDog.hpp"

WrongDog::WrongDog(): WrongAnimal("WrongDog")
{
	std::cout << "WrongDog default constructor  is called" << std::endl;
}

WrongDog::WrongDog(WrongDog& ab) : WrongAnimal()
{
	*this = ab;
}

WrongDog& WrongDog::operator=(WrongDog & ab)
{
	if(this != &ab)
		this->type = ab.type;
	return (*this);;
}

WrongDog::~WrongDog()
{
	std::cout << "WrongDog destructor is called" << std::endl;
}

void WrongDog::makeSound() const
{
	std::cout << "WooF WooF" << std::endl;
}
