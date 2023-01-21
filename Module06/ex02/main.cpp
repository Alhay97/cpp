#include "base.hpp"
#include "class.hpp"

int main(void)
{
	Base*	p;
	p->generate();
	p->identify(p);
	p->identify(*p);
}