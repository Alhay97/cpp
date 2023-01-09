#include "brain.hpp"

Brain::Brain()
{
	int i = 0;
	while (i < 101)
	{
		std::cout << "idea is being generated ->" << std::endl;
		i++;
	}
	std::cout << "Brain Default constructor has been called" << std::endl;
}

Brain::Brain(Brain& ab)
{
	*this = ab;
}

Brain& Brain::operator=(Brain& ab)
{
	int i = 0;
	while (i >= 100)
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
	if (i >= 0 && i <= 100)
		this->idea[100] = idea;
	else
		std::cout << "Generation Error.." << std::endl;

}

std::string const  &Brain::getIdea (int i) const
{

	return (this->idea[i]);
}

