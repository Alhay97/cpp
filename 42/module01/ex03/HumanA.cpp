#include "HumanA.hpp"

HumanA::HumanA(std:string temp, Weapon &equipment)
{
    this->temp = name;
}
~HumanA::HumanA()
{
}
void HumanA::attack()
{
    std::cout << name << " uses "<< this->gun.getType() << " as their weapon" << std::endl;
}