#include "WrongDog.hpp"

WrongDog::WrongDog() : WrongAnimal("WrongDog")
{
	this->brain  = new Brain();
	std::cout << "WrongDog default constructor  is called" << std::endl;
}

WrongDog::WrongDog(WrongDog& ab) : WrongAnimal()
{
	*this = ab;
	this->brain = new Brain(*ab.getBrain());
}

WrongDog& WrongDog::operator=(WrongDog & ab)
{
	if(this != &ab)
	{
		this->~WrongDog();
		this->brain = new Brain(*ab.getBrain());
		this->WrongAnimal::operator=(ab);
	}
	return (*this);
}

WrongDog::~WrongDog()
{
	std::cout << "WrongDog destructor is called" << std::endl;
	this->brain;
}

void WrongDog::makeSound() const
{
	std::cout << "Meow Meow" << std::endl;
}

Brain *WrongDog::getBrain() const
{
	return (this->brain);
}
