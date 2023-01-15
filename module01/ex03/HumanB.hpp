#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    public:
        HumanB(std::string temp);
        ~HumanB();
        void attack();
        void setWeapon(Weapon &gun);

        private:
        std::string name;
        Weapon*gun;
};

#endif
