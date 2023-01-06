#include "FragTrap.hpp"

int main(void)
{
	ClapTrap	bb8("BB8");
	FragTrap	r2d2("R2D2");
	FragTrap	c3p0("C3PO");
	FragTrap	bb10(r2d2);

	r2d2.attack("C3PO");
	c3p0.takeDamage(10);
	c3p0.beRepaired(5);
	bb10.highFivesGuys();
	return (0);
}
