#include "dog.hpp"
#include "cat.hpp"
#include "animal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		j->makeSound(); //will output the cat sound! j->makeSound();
		meta->makeSound();
		i->makeSound();
		delete meta;
		delete i;
		delete j;
		return 0;
	}

	std::cout << "----------------------------------------------------------" << std::endl;

	// {
	// 	const WrongAnimal* metaaa = new WrongAnimal();
	// 	const WrongAnimal* me = new WrongDog();
	// 	const WrongAnimal* he = new WrongCat();
	// 	std::cout << me->getType() << " " << std::endl;
	// 	std::cout << he->getType() << " " << std::endl;
	// 	me->makeSound(); //will output the cat sound! me->makeSound();
	// 	metaaa->makeSound();
	// 	he->makeSound();
	// 	delete metaaa;
	// 	delete he;
	// 	delete me;
	// 	return 0;
	// }
}
