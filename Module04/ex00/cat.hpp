#ifndef CAT_HPP
#define CAT_HPP
#include "animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat& ab);
		Cat& operator=(Cat& ab);
		virtual ~Cat();
		virtual void makeSound() const;
};
#endif
