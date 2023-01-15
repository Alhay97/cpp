#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string _name)
{
	this->setname(_name);
	this->getname();
	std::cout << "FragTrap Overload constructor called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

FragTrap::FragTrap(FragTrap& ab)
{
	std::cout << " FragTrap copy Constructor has been called" << std::endl;
	*this = ab;
}
FragTrap& FragTrap::operator=(FragTrap& ab)
{
	std::cout << "FragTrap copy assigment operator has been called" << std::endl;
	this->name = ab.name;
	this->hit_points = ab.hit_points;
	this->energy_points = ab.energy_points;
	this->attack_damage = ab.attack_damage;
	return (*this);
}
FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor has been called" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if(this->hit_points > 0 && this->energy_points > 0)
	{
		std::cout << "FragTrap " << this->getname() << " attacks " << target << ", causing ";
		std::cout <<  this->attack_damage << " points of damage!" << std::endl;
		this->hit_points--;
	}
	else
		std::cout << "FragTrap is low on energy "<< std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap"<< this->name << "gives a high five to you" << std::endl;
}
