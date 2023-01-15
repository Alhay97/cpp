#include "Weapon.hpp"


void Weapon::setType(std::string Type)
{
	this->type = Type;
}
Weapon::Weapon(std::string W_name)
{
	this->setType(W_name);
}

const std::string &Weapon::getType()
{
	return(this->type);
}

Weapon::~Weapon(void)
{
}

Weapon::Weapon(void)
{
}
