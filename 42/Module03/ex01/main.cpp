#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap zero("zer0");
	ScavTrap hammer("sir Hammerlock");
	ScavTrap hand(zero);
	ScavTrap sir("");

	sir = hammer;

	zero.attack("minion");
	hammer.attack("car");
	hand.attack("minion");
	sir.attack("hulk");

	zero.takeDamage(6);
	zero.beRepaired(1);

	return (0);
}
