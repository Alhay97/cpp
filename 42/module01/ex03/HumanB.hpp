##include <iostream>
#include "Weapon.hpp"

class HumanB
{
    public:
        HumanB(std::string temp);
        ~HumanB();
        void attack();
        void set_attack(Weapon &gun);

        private:
        std::string name;
        Weapon*gun;
};