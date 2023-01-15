# ifndef DIAMONDTRAP
# define DIAMONDTRAP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap , public FragTrap
{
	private:
		std::string _name;

	public:
		DiamondTrap();
		DiamondTrap(const std::string _name);
		DiamondTrap(DiamondTrap& ab);
		DiamondTrap& operator=(DiamondTrap& ab);
		~DiamondTrap();
		void attack(const std::string& target);
		void whoAmI();
};

#endif
