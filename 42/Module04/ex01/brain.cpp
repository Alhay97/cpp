#include "brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default constructor has been called" << std::endl;
}

Brain::Brain(Brain& ab)
{
	*this = ab;
}

Brain& Brain::operator=(Brain& ab)
{
	int i = 0;
	while (i < 100)
	{
		this->idea[i] = ab.idea[i];
		i++;
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor has been called" << std::endl;
}

void Brain::ideaGeneration(int i, std::string idea)
{
	this->idea[i] = idea;

}

std::string const  &Brain::getIdea (int i) const
{

	return (this->idea[i]);
}

