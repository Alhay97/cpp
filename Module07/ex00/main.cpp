
#include "whatever.hpp"


int main()
{
	int a = 21;
	int b = 54;
	std::cout << "the old a =>" << a <<std::endl;
	std::cout << "the old b =>" << b <<std::endl;
	::alswap<int>(a,b);
	std::cout << "the new a =>" << a <<std::endl;
	std::cout << "the new b =>" << b <<std::endl;

	float d = 32.21;
	float e = 324.54;
	std::cout << "the old d =>" << d <<std::endl;
	std::cout << "the old e =>" << e <<std::endl;
	::alswap<float>(d,e);
	std::cout << "the new d =>" << d <<std::endl;
	std::cout << "the new e =>" << e <<std::endl;


	int q = 21;
	int w = 54;
	double r = 100.21;
	double t = 42.21;
	std::cout << "max for int " << ::almax<int>(q,w) << std::endl;
	std::cout << "max for double " << ::almax<double>(r,t) << std::endl;
	std::cout << "min for int " << ::almin<int>(q,w) << std::endl;
	std::cout << "min for double " << ::almin<double>(r,t) << std::endl;
}



