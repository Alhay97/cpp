#include "Zombie.hpp"

void Zombie::set_name(std::string _name)
{
    this->name = _name;
}
std::string Zombie::get_name(void)
{
    return (name);
}

Zombie::~Zombie()
{
    std::cout << "killing Zombie: " << get_name() << std::endl;
}

void Zombie::announce()
{
    if (get_name() == "Foo")
        std::cout << Zombie::get_name() << ": BraiiiiiiinnnzzzZ..." << std::endl;

    else
        std::cout << "<" << Zombie::get_name() << ">: BraiiiiiiinnnzzzZ..." << std::endl;
}    