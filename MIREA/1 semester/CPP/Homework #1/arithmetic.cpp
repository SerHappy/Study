#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "Input a and b: ";
	cin >> a >> b;
	cout << "Sum = " << a + b << endl;
	cout << "Dif = " << a - b << endl;
	cout << "Mul = " << a * b << endl;
	if (b != 0) {
		cout << "Div = " << a / b;
	}else{
		cout << "Devision by 0!";
	}
	return 0;
}
