#include <iostream>
using namespace std;

int main()
{
	int  n;
	cout << "Enter n: ";
	cin >> n;
	cout << "Prime numbers from 2 to " << n << " --> ";
	int* a = new int[n + 1];

	for (int i = 0; i <= n; i++)
		a[i] = i;

	for (int i = 2; i * i <= n; i++)
	{
		if (a[i] != 0)
			for (int j = i * i; j <= n; j += i)
				a[j] = 0;
	}

	for (int i = 2; i <= n; i++)
	{
		if (a[i] != 0)
		{
			cout << a[i] << " ";
		}
	}

	delete[] a;
}
