#include "cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat default constructor  is called" << std::endl;
	this->brain =new Brain();
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
	// this->brain->~Brain();
	delete brain;
	std::cout << "Cat destructor is called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow Meow" << std::endl;
}

Brain *Cat::getBrain() const
{
	return (this->brain);
}
