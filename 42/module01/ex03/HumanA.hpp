#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    public:
        HumanA(std:string temp, Weapon &equipment);
        ~HumanA();
        void attack();
    
    private:
        std::string name;
        Weapon &gun;

};