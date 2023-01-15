#include "cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat default constructor  is called" << std::endl;
}

Cat::Cat(Cat& ab) : Animal()
{
	*this = ab;
}

Cat& Cat::operator=(Cat & ab)
{
	if(this != &ab)
		this->type = ab.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor is called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow Meow" << std::endl;
}
