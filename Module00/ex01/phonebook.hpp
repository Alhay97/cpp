#include <iostream>
#include <cstdlib>
#include "contact.hpp"

class Phonebook
{
	private:
		Contact person[8];

	public:
		void infinte_getline(void);
		void info_print(void);
		void user_info(int index);

};

void print_table(void);
