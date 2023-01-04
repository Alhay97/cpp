# ifndef SCAVTRAP
# define SCAVTRAP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const std::string _name);
		ScavTrap(ScavTrap& ab);
		ScavTrap& operator=(ScavTrap& ab);
		~ScavTrap();
		void attack(const std::string& target);
		void guardGate();
};

#endif
