#include "Bureaucrat.hpp"


double division(int a, int b)
{
	if(b==0)
		throw "Division by zero Condition"; // to declare that the error has occured
	return(a/b);
}



int main()
{
	int x = 50;
	int y = 0;
	double z = 0;

	try {   //checks for errors
		z = division(x,y);
		std::cout << z << std::endl;
	}catch(const char* msg) // handle the error
	{
		std::cerr << msg <<std::endl;
	}
	return 0;
}
