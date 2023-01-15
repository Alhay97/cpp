#include "HumanA.hpp"

HumanA::HumanA(std::string temp, Weapon &wep):gun(wep)
{
    this->name = temp;
}
HumanA::~HumanA()
{
}
void HumanA::attack()
{
    std::cout << name << " uses "<< this->gun.getType() << " as their weapon" << std::endl;
}
