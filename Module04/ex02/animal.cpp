#include "animal.hpp"

Animal::Animal() : type("Monkey")
{
	std::cout << "Animal default constructor  is called" << std::endl;
}

Animal::Animal(Animal& ab)
{
	std::cout << "Animal Copy constructor is called" << std::endl;
	*this = ab;
}

Animal::Animal(std::string _type) : type(_type)
{
	std::cout << "Animal Overload Constructor has been called" << std::endl;
}

std::string Animal::getType() const
{
	return (type);
}

Animal& Animal::operator=(Animal & ab)
{
	std::cout << "Animal copy assigment operator has been called" << std::endl;
	if(this != &ab)
		this->type = ab.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor is called" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "oOoOo AaAaA" << std::endl;
}
