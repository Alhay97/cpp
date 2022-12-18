#include <iostream>
using namespace std;


// endl -> is used for new line

// << -> for output
// >> -> for input
int ft_strlen(char *s)
{
	int index = 0;
	while (s[index] != '\0')
		index++;
	return (index);
}

int main(void)
{
	char ab[] = "hello alhai";
	int ac = ft_strlen(ab);
	cout << ac << endl;
	return 0;
}

