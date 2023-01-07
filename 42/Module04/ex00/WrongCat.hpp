#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(WrongCat& ab);
		WrongCat& operator=(WrongCat& ab);
		~WrongCat();
		void makeSound() const;
};
#endif
