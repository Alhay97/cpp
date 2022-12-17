#include <iostream>
using namespace std;


// endl -> is used for new line

// << -> for output
// >> -> for input


int main()
{
	int i;
	int b;
	cout << "Enter Endpoint: ";
	cin >> b;
	cout << endl;
	for (i = 1; i <= b ; i++)
	{
		if(i % 2 == 0)
			cout << i << " is Even" << endl;
		else
			cout << "not even" << endl;

	}
	return 0;
}
