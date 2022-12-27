# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>

class Zombie
{
    Zombie();
    ~Zombie();
    private:
        std::string name;
    public:
        void announce( void);

    void set_name(std::string _name);
    std::string get_name(void);
};

Zombie* newZombie( std::string name );

void randomChump( std::string name );

# endif
