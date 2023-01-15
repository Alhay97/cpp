#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP
#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;

	public:
		WrongAnimal();
		WrongAnimal(std::string _type);
		WrongAnimal(WrongAnimal& ab);
		WrongAnimal& operator=(WrongAnimal& ab);
		~WrongAnimal();
		void setType(std::string _type);
		std::string getType() const;
		void makeSound() const;


};
#endif


