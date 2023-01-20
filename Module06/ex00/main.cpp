#include "literal.hpp"

int main(int ac, char **av)
{
    (void)ac;
	// try{
	if (ac != 2)
		std::cout << "Error: invalid argument\n" << std::endl;
	// }catch(std::exception &e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// 	exit(1);
	// }
	Literals conv(av[1]);
	conv.printter();
	return (0);
}