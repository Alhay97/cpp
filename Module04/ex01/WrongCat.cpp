#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	this->brain  = new Brain();
	std::cout << "WrongCat default constructor  is called" << std::endl;
}

WrongCat::WrongCat(WrongCat& ab) : WrongAnimal()
{
	*this = ab;
	this->brain = new Brain(*ab.getBrain());
}

WrongCat& WrongCat::operator=(WrongCat & ab)
{
	if(this != &ab)
	{
		this->~WrongCat();
		this->brain = new Brain(*ab.getBrain());
		this->WrongAnimal::operator=(ab);
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor is called" << std::endl;
	this->brain;
}

void WrongCat::makeSound() const
{
	std::cout << "Meow Meow" << std::endl;
}

Brain *WrongCat::getBrain() const
{
	return (this->brain);
}
