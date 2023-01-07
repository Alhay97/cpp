#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "animal.hpp"
#include <iostream>

class Brain
{
	protected:
		std::string idea[100];

	public:
		Brain();
		Brain(Brain& ab);
		Brain& operator=(Brain& ab);
		~Brain();
}


#endif
