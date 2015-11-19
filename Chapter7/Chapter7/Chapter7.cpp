#include <iostream>

using namespace std;

int main()
{
	int inputOne = 0;
	int inputTwo = 0;
	int final;
	cout << "Enter an Even Int" << endl;
	cin >> inputOne;
	cout << "Enter an Int" << endl;
	cin >> inputTwo;
	if (inputOne % 2 == 0)
	{
		for (; inputOne <= inputTwo; inputOne + 2)
		{
			final += inputOne;
		}
	}
	else
	{
		inputOne = inputOne + 1;
	}
	return 0;
}
