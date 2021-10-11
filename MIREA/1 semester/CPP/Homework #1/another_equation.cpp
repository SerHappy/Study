#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float a, b, c, D;
	cout << "Input 'a','b' and 'c' for ax^2+bx+c=0: ";
	cin >> a >> b >> c;
	if (a == 0) {
		if (b != 0) {
			cout <<"The answer is " << -c / b;
		}
		else if (b == 0 && c == 0) {
			cout << "R";
		}
		else {
			cout << "No solutions";
		}
	}
	else {
		D = (b * b) - 4 * a * c;
		if (D < 0) {
			cout << "No solutions";
		}
		else if (D == 0) {
			cout << "The answer is " << (-b) / (2 * a);
		}
		else {
			cout << "The first answer is " << (-b + sqrt(D)) / (a * 2) << endl;;
			cout << "The second answer is " << (-b - sqrt(D)) / (a * 2);
		}
	}
	return 0;
}
