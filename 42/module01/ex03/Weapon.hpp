#include <iostream>

class Weapon
{
	private:
		std::string type;

	public:
		void setType(std::string &Type);
		const std::string &getType();
		Weapon(void);
		Weapon(std::string W_name);
		~Weapon(void);
};
