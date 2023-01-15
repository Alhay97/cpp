#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP
#include "WrongAnimal.hpp"
#include "brain.hpp"

class WrongCat : public WrongAnimal
{
	private:
		Brain *brain;
	public:
		WrongCat();
		WrongCat(WrongCat& ab);
		WrongCat& operator=(WrongCat& ab);
		~WrongCat();
		void makeSound() const;
		Brain *getBrain() const;
};

#endif
