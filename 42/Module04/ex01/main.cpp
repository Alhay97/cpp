#include "dog.hpp"
#include "cat.hpp"
#include "animal.hpp"
#include "brain.hpp"


int main()
{
	{

		Cat cat;

		cat.getBrain()->ideaGeneration(0, "hello");
		std::cout << cat.getBrain()->getIdea(0) << std::endl<<std::endl;

		Dog dog;
		dog.getBrain()->ideaGeneration(0, "hi");
		std::cout << "original "<<dog.getBrain()->getIdea(0) << std::endl<<std::endl;

		Dog dog2 = dog;
		dog2.getBrain()->ideaGeneration(0, "HI");
		std::cout <<"* "<< dog2.getBrain()->getIdea(0) << std::endl;
		std::cout <<"* "<< dog2.getBrain()->getIdea(1) << std::endl<<std::endl;

		std::cout <<"original "<< dog.getBrain()->getIdea(0) << std::endl;
		std::cout <<"original "<< dog.getBrain()->getIdea(1) << std::endl<<std::endl;
		// std::cout << dog.getBrain()->getIdea(0) << std::endl;
	}
	// {
	// 	const Animal* j = new Dog();
	// 	delete j;//should not create a leak delete i;
	// }

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
