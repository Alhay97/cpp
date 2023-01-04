
#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string name)
{
	this->getname();
	std::cout << "Constructor has been called" << std::endl;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;

}
ClapTrap::ClapTrap(ClapTrap& ct)
{
	std::cout << "Copy Constructor has been called" << std::endl;
	*this = ct;
}
ClapTrap& ClapTrap::operator=(ClapTrap& ct)
{
	std::cout << "copy assigment operator has been called" << std::endl;
	this->name = ct.name;
	this->hit_points = ct.hit_points;
	this->energy_points = ct.energy_points;
	this->attack_damage = ct.attack_damage;
	return (*this);
}
ClapTrap::~ClapTrap()
{
	std::cout << "Destructor has been called" << std::endl;
}

void ClapTrap::setname(std::string name1)
{
	this->name = name1;
}
std::string ClapTrap::getname()
{
	return (this->name);
}
void ClapTrap::attack(const std::string& target)
{
	if(this->hit_points > 0 && this->energy_points > 0)
	{
		std::cout << "ClapTrap " << this->getname() << " attacks " << target << ", causing ";
		std::cout <<  this->attack_damage << " points of damage!" << std::endl;
		this->hit_points--;
	}
	else
		std::cout << "ClapTrap is low on energy "<< std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	int hit = amount;
	while (amount && (this->hit_points <= 0) && (this->energy_points <= 0))
	{
		amount--;
		this->hit_points--;
		this->energy_points--;

	}
	std::cout << "ClapTrap " << this->name << " takes " << hit << " of damage \n"
			<< "remaining health: " << this->hit_points << std::endl;

}
void ClapTrap::beRepaired(unsigned int amount)
{
	int repaired = amount;
	while(amount && this->hit_points <= 10)
	{
		this->hit_points++;
		amount--;
	}
	std::cout << "ClapTrap " << this->name << " is being repaired " << repaired << " to increase its health-> "
		<< this->hit_points << std::endl;
}
