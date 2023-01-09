#include "cat.hpp"

Cat::Cat() : Animal("Cat")
{
	this->brain =new Brain();
	std::cout << "Cat default constructor  is called" << std::endl;
}

Cat::Cat(Cat& ab) : Animal()
{
	*this = ab;
	this->brain = new Brain(*ab.getBrain());
}

Cat& Cat::operator=(Cat & ab)
{
	if(this != &ab)
	{
		this->~Cat();
		this->brain = new Brain(*ab.getBrain());
		this->Animal::operator=(ab);
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor is called" << std::endl;
	delete brain;
}

void Cat::makeSound() const
{
	std::cout << "Meow Meow" << std::endl;
}

Brain *Cat::getBrain() const
{
	return (this->brain);
}
