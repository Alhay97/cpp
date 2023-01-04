# ifndef FRAGTRAP
# define FRAGTRAP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const std::string _name);
		FragTrap(FragTrap& ab);
		FragTrap& operator=(FragTrap& ab);
		~FragTrap();
		void attack(const std::string& target);
		void highFivesGuys(void);

};

#endif
