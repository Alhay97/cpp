#include <iostream>

class Room
{
	public :
		double len;
		double width;
		double hieght;

		double CalculateArea()
		{
			return len * width;
		}
		double CalculateVolume()
		{
			return len * width * hieght;
		}
};

int main()
{
	Room room1;

	room1.hieght = 42.32;
	room1.len = 231.32;
	room1.width = 21.2;

	std::cout << "the Calculated Area is: " << room1.CalculateArea() << std::endl;
	std::cout << "the Calculated Volume is: " << room1.CalculateVolume() << std::endl;
	return 0;

}
