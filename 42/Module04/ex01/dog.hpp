#ifndef DOG_HPP
#define DOG_HPP
#include "animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(Dog& ab);
		Dog& operator=(Dog& ab);
		virtual ~Dog();
		virtual void makeSound() const;
};
#endif
