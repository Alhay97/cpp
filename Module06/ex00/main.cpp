#include "literal.hpp"

int main(int ac, char **av)
{
    (void)ac;
	if (ac != 2)
		throw std::invalid_argument("Error: invalid argument\n");
	Literals conv(av[1]);
	conv.printter();
	return (0);
}