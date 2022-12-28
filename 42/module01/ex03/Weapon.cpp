#include "Weapon.hpp"


void Weapon::setType(std::string &Type)
{
	this->type = Type;
}
const std::string &Weapon::getType()
{
	return(this->type);
}
Weapon::Weapon(std::string W_name)
{
	this->setType(W_name);
}
Weapon::Weapon(void)
{
}
Weapon::~Weapon(void)
{
}
