#include <iostream>
#include <cctype>
#include <cstring>

int main(int counter, char **var)
{
	if (counter > 1)
	{
		for (size_t i = 1; i < counter; i++)
		{
			size_t k = strlen(var[i]);
			for (size_t j = 0; j < k ; j++)
			{
				if (islower(var[i][j]) != 0)
					std::cout << (char)toupper(var[i][j]);
				else
					std::cout << var[i][j];
			}
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;

}

