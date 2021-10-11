#include <iostream>
using namespace std;


float check_sign(float x)
{
	return x > 0 ? 1 : x < 0 ? -1 : 0;
}

int main() {
	float num;
	cout << "Input num: ";
	cin >> num;
	cout << check_sign(num) << endl;
	system("pause");
	return 0;
}
