#ifndef CAT_HPP
#define CAT_HPP
#include "animal.hpp"
#include "brain.hpp"

class Cat : public Animal
{
	private:
		Brain *brain;
	public:
		Cat();
		Cat(Cat& ab);
		Cat& operator=(Cat& ab);
		virtual ~Cat();
		virtual void makeSound() const;
		Brain *Cat::getBrain() const;
};
#endif
