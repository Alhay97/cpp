#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor  is called" << std::endl;
}

WrongCat::WrongCat(WrongCat& ab) : WrongAnimal()
{
	*this = ab;
}

WrongCat& WrongCat::operator=(WrongCat & ab)
{
	if(this != &ab)
		this->type = ab.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor is called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Meow Meow" << std::endl;
}
