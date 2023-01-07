#ifndef WRONG_DOG_HPP
#define WRONG_DOG_HPP
#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal
{
	public:
		WrongDog();
		WrongDog(WrongDog& ab);
		WrongDog& operator=(WrongDog& ab);
		~WrongDog();
		void makeSound() const;
};
#endif
