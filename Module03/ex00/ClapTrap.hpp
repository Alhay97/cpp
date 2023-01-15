# ifndef CLAP_TRAP
# define CLAP_TRAP

#include <iostream>

class ClapTrap
{
	private:
		std::string name;
		int hit_points;
		int	energy_points;
		int attack_damage;



	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap& ct);
		ClapTrap& operator=(ClapTrap& ct);
		~ClapTrap();
		void setname(std::string name1);
		std::string getname();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
