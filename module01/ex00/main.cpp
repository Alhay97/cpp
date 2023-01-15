#include "Zombie.hpp"

int main()
{
    Zombie *zo;
    std::string temp;

    std::cout << "Enter Zombie name: ";
    std::cin >> temp;
    zo = newZombie(temp);
    zo->announce();
    std::cout << "Zombie is in the heap"<< std::endl;
    std::cout << "Enter Zombie name: ";
    std::cin >> temp;
    randomChump(temp);
    delete zo;
    return (0);
}
