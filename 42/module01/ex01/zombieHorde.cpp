#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *num;
    num = new Zombie[N];
    int i = 0;
    while ( i < N)
    {
		num[i].set_name(name);
        i++;
    }
    return(num);
}
