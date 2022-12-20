#include<iostream>

class Circle
{
	public:
		double raduis;
		double calculate_area()
		{
			return (3.14 * raduis * raduis);
		}
};

int main()
{
	Circle circ;

	circ.raduis = 2.22;
	std::cout << "The raduis is: "<< circ.raduis << std::endl;
	std::cout << "The area is: "<<circ.calculate_area();
	return 0;
}
