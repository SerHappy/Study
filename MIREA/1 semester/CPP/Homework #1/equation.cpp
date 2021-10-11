#include <iostream>
using namespace std;

int main() {
	float b, c;
	cout << "Input 'b' and 'c' for bx+c=0: ";
	cin >> b >> c;
	if (b != 0) {
		cout <<"The answer is " << -c / b;
	}
	else if (b == 0 && c == 0) {
		cout << "x R";
	}
	else {
		cout << "No solutions";
	}
	return 0;
}
