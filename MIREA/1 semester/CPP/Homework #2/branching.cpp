#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
using namespace std;

int main() {
	float x, a;
	cout << R"(Input "x" and "a": )";
	cin >> x >> a;
	if (abs(x) < 1 && x > 0) {
		cout << "w = " << a * log(abs(x));
	}
	else if (a >= x * x) {
		cout << "w = " << sqrt(a - x * x);
	}
	else {
		cout << "No solutions";
	}
}
