#include "dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "Dog default constructor  is called" << std::endl;
	this->brain =new Brain();
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
		this->type = ab.type;
		this->brain = new Brain(*ab.getBrain());
		this->Animal::operator=(ab);
	}
	return (*this);;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destructor is called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "WooF WooF" << std::endl;
}

Brain *Dog::getBrain() const
{
	return (this->brain);
}
