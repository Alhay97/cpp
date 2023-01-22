#include "iter.hpp"
void	print(std::string &str)
{
	std::cout << "printing.... ->  " << str << std::endl;
}

void	multiplyby2(int	&n)
{
	n =  n * 2;
}

int main( void )
{
	std::string str[5] = { "Blue", "Red", "Orange", "Yellow", "Black"};
	int			ar[5] = {1, 2, 3, 4, 5};
	::iter(str, 5, &print);

	std::cout << std::endl;
	std::cout << "Before iter call for int array" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << ar[i] << " ";


	std::cout << std::endl;

	
	::iter(ar, 5, &multiplyby2);
	std::cout << "After iter call for int array" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << ar[i] << " ";
	std::cout << std::endl;
	return 0;
}
