#include "dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "Dog default constructor  is called" << std::endl;
}

Dog::Dog(Dog& ab) : Animal()
{
	*this = ab;
}

Dog& Dog::operator=(Dog & ab)
{
	if(this != &ab)
		this->type = ab.type;
	return (*this);;
}

Dog::~Dog()
{
	std::cout << "Dog destructor is called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "WooF WooF" << std::endl;
}
