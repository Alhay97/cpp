#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	zero("zer0");
	ClapTrap	hammer("sir Hammerlock");
	ClapTrap	hand(zero);
	ClapTrap	sir("");

	sir = hammer;

	zero.attack("tree");
	hammer.attack("car");
	hand.attack("minion");
	sir.attack("hulk");

	zero.takeDamage(3);
	zero.beRepaired(1);

	return (0);
}
