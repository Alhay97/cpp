#include <iostream>

class Point
{
	private:
		int x;
		int y;

	public:
		Point(int a, int b)
		{
			x = a;
			y = b;
		}
		int getx()
		{
			return x;
		}
		int gety()
		{
			return y;
		}
};

int main()
{
	Point pp(21,43);
	std::cout << "p1.x = " << pp.getx() << ", p1.y = " << pp.gety();
	return 0;
}
