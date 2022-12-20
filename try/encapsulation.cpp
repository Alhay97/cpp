#include <iostream>

class Encapsulation
{
	private:
		int x;

	public:
		void set(int a)
		{
			x = a;
		}

		int get()
		{
			return x;
		}
};

int main()
{
	Encapsulation hi;

	hi.set(5);

	std::cout << hi.get();

	return 0;
}
