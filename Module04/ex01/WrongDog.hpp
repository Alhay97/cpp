#ifndef WRONG_DOG_HPP
#define WRONG_DOG_HPP
#include "WrongAnimal.hpp"
#include "brain.hpp"

class WrongDog : public WrongAnimal
{
	private:
		Brain *brain;
	public:
		WrongDog();
		WrongDog(WrongDog& ab);
		WrongDog& operator=(WrongDog& ab);
		~WrongDog();
		void makeSound() const;
		Brain *getBrain() const;
};
#endif
