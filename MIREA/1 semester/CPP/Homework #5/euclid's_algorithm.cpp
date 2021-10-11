#include <iostream>

using namespace std;
int main()
{
	int a, b, choice;
	cout << "Enter a and b and 1/2: ";
	cin >> a >> b >> choice;
	switch (choice)
	{
	case 1:
		while (a != 0 && b != 0)
		{
			if (a > b) a %= b;
			else b %= a;
		}
		cout <<"The result of Euclidean algorithm by division is --> " << a + b;
		break;
	case 2:
		while (a != b)
		{
			if (a > b) a -= b;
			else b -= a;
		}
		cout << "The result of Euclidean algorithm by subtraction is --> " << a;
		break;
		default:
			cout << "Wrong Input";
	}
}
