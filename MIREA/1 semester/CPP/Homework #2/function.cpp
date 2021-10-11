#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float x, y, b;
	cout << R"(Input "x", "y" and "b": )";
	cin >> x >> y >> b;
	if (b - y > 0 && b - x >= 0) {
		cout << "z = " << log(b - y) * sqrt(b - x);
	}
	else {
		cout << "No solutions";
	}
}
