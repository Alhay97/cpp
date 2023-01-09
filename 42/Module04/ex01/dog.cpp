#include "dog.hpp"

Dog::Dog(): Animal("Dog")
{
	this->brain =new Brain();
	std::cout << "Dog default constructor  is called" << std::endl;
}

Dog::Dog(Dog& ab) : Animal()
{
	*this = ab;
	this->brain =new Brain(*ab.getBrain());
}

Dog& Dog::operator=(Dog & ab)
{
	if(this != &ab)
	{
		this->~Dog();
		this->brain = new Brain(*ab.getBrain());
		this->Animal::operator=(ab);
	}
	return (*this);;
}

Dog::~Dog()
{
	std::cout << "Dog destructor is called" << std::endl;
	delete brain;
}

void Dog::makeSound() const
{
	std::cout << "WooF WooF" << std::endl;
}

Brain *Dog::getBrain() const
{
	return (this->brain);
}
