#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string _name)
{
	std::cout << "ScavTrap Overload constructor called" << std::endl;
	this->setname(_name);
	this->getname();
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap(ScavTrap& ab)
{
	std::cout << "ScavTrap Copy Constructor has been called" << std::endl;
	*this = ab;
}
ScavTrap& ScavTrap::operator=(ScavTrap& ab)
{
	std::cout << "copy assigment operator has been called" << std::endl;
	this->name = ab.name;
	this->hit_points = ab.hit_points;
	this->energy_points = ab.energy_points;
	this->attack_damage = ab.attack_damage;
	return (*this);
}
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor has been called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if(this->hit_points > 0 && this->energy_points > 0)
	{
		std::cout << "ScavTrap " << this->getname() << " attacks " << target << ", causing ";
		std::cout <<  this->attack_damage << " points of damage!" << std::endl;
		this->hit_points--;
	}
	else
		std::cout << "ScavTrap is low on energy "<< std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
