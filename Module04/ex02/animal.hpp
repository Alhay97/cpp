#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
	protected:
		std::string type;

	public:
		Animal();
		Animal(std::string _type);
		Animal(Animal& ab);
		Animal& operator=(Animal& ab);
		virtual ~Animal();
		void setType(std::string _type);
		std::string getType() const;
		virtual void makeSound() const = 0;


};
#endif
