#include <iostream>

class Shape
{
	private:
		int hieght;
		int width;

	public:
		void setter_height(int h)
		{
			hieght = h;
		}

		void setter_width(int w)
		{
			width = w;
		}

		int setter_height()
		{
			return hieght;
		}

		int setter_width()
		{
			return width;
		}

		int getArea()
		{
			return width * hieght;
		}

};

int main()
{
	Shape square;

	square.setter_height(20);
	square.setter_width(90);

	std::cout << square.getArea() << std::endl;
}
