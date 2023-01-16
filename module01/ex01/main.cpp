#include "Zombie.hpp"

int main()
{
	Zombie *zombie;
	std::string zs = "Zombie";
	int bc = 20;
	zombie = zombieHorde(bc,zs);
	int i = 0;
	while (i < bc)
	{
		std::cout << "heloo Zombie " << i << ": ";
		zombie[i].announce();
		i++;
	}
	delete[] zombie;
	return 0;
}
