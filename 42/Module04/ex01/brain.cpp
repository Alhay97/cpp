#include "brain.hpp"

Brain::Brain()
{

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

}
