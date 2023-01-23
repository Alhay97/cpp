#include <iostream>
#include <cctype>
#include <cstring>

int main(int counter, char **var)
{
	if (counter > 1)
	{
		for (int i = 1; i < counter; i++)
		{
			int k = strlen(var[i]);
			for (int j = 0; j < k ; j++)
			{
				if (islower(var[i][j]) != 0)
					std::cout << (is)toupper(var[i][j]);
				else
					std::cout << var[i][j];
			}
			std::cout << " ";
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;

}

