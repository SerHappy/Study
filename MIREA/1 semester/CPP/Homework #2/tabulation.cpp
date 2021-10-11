#include <iostream>
using namespace std;

int main() {
	for (int i = -40; i <= 40; i += 5) {
		float x = static_cast<float>(i) / 10;
		if (abs(x - 1) < numeric_limits<float>::epsilon()) {
			cout << "x = " << x << " No solutions" << endl;
		}
		else {
			cout << "x = " << x << " y = " << (x * x - 2 * x + 2) /
				(x - 1) << endl;
		}
	}
}
