#include "HumanB.hpp"

HumanB::HumanB(std::string temp)
{
    this->name = temp;
    this->gun = NULL;
}
HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &gun)
{
    this->gun = &gun;
}

void HumanB::attack()
{
    std::cout << name << " uses "<< this->gun->getType() << " as their weapon" << std::endl;
}
