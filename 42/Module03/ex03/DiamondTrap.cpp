#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "Default DiamondTrap Constructor has been called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string _name)
{
	this->setname(_name);
	this->getname();
	std::cout << "FragTrap Overload constructor called" << std::endl;
	this->hit_points = FragTrap::gethitpoint();
	this->energy_points = this->ScavTrap::energy_points;
	this->attack_damage = this->ScavTrap::attack_damage;
}


DiamondTrap::DiamondTrap(DiamondTrap& ab)
{
	std::cout << " DiamondTrap copy Constructor has been called" << std::endl;
	*this = ab;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap& ab)
{
	std::cout << "DiamondTrap copy assigment operator has been called" << std::endl;
	this->name = ab.name;
	this->hit_points = ab.hit_points;
	this->energy_points = ab.energy_points;
	this->attack_damage = ab.attack_damage;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor has been called" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	this->ScavTrap::attack( target );
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << this->_name << std::endl;
	std::cout << "DiamondTrap orginated from ClapTrap: " << ClapTrap::name << std::endl;

}
