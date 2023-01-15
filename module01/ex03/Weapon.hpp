#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include "Weapon.hpp"

class Weapon
{
	private:
		std::string type;

	public:
		void setType(std::string Type);
		const std::string &getType();
		Weapon(std::string W_name);
		~Weapon(void);
		Weapon(void);
};

#endif
