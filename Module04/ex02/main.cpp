#include "dog.hpp"
#include "cat.hpp"
#include "animal.hpp"
#include "brain.hpp"


int main()
{
	Animal *Animal[6];
	for (int i = 0; i < 6; i++)
	{
		if (i % 2 == 0)
			Animal[i] = new Cat();
		else
			Animal[i] = new Dog();
		Animal[i]->makeSound();
	}
	for (int i = 0; i < 6; i++)
	{
		delete Animal[i];
	}
	Dog Dalmatian;
	Dog Perdita = Dalmatian;
	for (int i = 0; i < 50; ++i)
	{
		Dalmatian.getBrain()->ideaGeneration(i, "Fight cruella\n");
		Perdita.getBrain()->ideaGeneration(i, "Eat Cruela\n");
	}
	std::cout << Dalmatian.getBrain()->getIdea(3);
	std::cout << Perdita.getBrain()->getIdea(3);
}
