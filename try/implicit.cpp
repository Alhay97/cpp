#include <iostream>
using namespace std;


int main()
{
	int num_int = 10;

	double num_double ;
	//automatic conversion from int to double
	num_double = num_int;

	cout << "num_int = " << num_int << endl;
	cout << "num_double = " << num_double << endl;

	//automatic conversion from int to double
	num_double = 9.99;
	num_int = num_double;

	cout << "num_int = " << num_int << endl;
	cout << "num_double = " << num_double << endl;

	return 0;

}
