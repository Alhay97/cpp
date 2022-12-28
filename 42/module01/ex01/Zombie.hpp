# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        void announce( void);
		Zombie();
		~Zombie();

    void set_name(std::string _name);
    std::string get_name(void);
};
Zombie* zombieHorde( int N, std::string name );

# endif
