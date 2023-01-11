#ifndef DOG_HPP
#define DOG_HPP
#include "animal.hpp"
#include "brain.hpp"

class Dog : public Animal
{
	private:
		Brain *brain;
	public:
		Dog();
		Dog(Dog& ab);
		Dog& operator=(Dog& ab);
		virtual ~Dog();
		virtual void makeSound() const;
		Brain *getBrain() const;
};
#endif
