#include <iostream>
using namespace std;

int main()
{

	int grade;
	cout << "Enter the grade: ";
	cin >> grade;

	if (grade > 100 )
		cout << "Invalid percentage number" << endl;
	else if(grade <= 100  && grade >= 90)
		cout << "A" << endl;
	else if(grade <= 89  && grade >= 80)
		cout << "B" << endl;
	else if(grade <= 79  && grade >= 70)
		cout << "C" << endl;
	else if(grade <= 69  && grade >= 60)
		cout << "D" << endl;
	else
		cout << "F" << endl;
	return 0;

}
