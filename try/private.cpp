#include <iostream>

class Shape
{
	private:
		double raduis;

	public:
		void  calculate_area(double r)
		{
			double area;
			raduis = r;

			area =  3.14 * raduis * raduis;
			std::cout << "The raduis is: "<< raduis << std::endl;
			std::cout << "The area is: " << area;
		}
};

// int main()
// {
// 	Shape circle;

// 	cricle.raduis = 1.15;

// 	std::cout << "Area is:" << circle.calculate_area();

// }
/*
The output of the above program is a compile time error
because we are not allowed to
access the private data members of a class
directly from outside the class.
*/



int main()
{
	Shape circle;
	circle.calculate_area(2.12);
	return 0;
}
/*
the output:
The raduis is: 2.12
The area is: 14.1124
*/
