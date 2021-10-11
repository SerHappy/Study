#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float S, m, n, p = 1, min_m = 999999, min_p = 1;
	cout << "Input S, m and n: ";
	cin >> S >> m >> n;
	while (p < 1000) {
		float r = p / 100;
		float denominator = 12 * (pow((1 + r), n) - 1);
		if (denominator < numeric_limits<float>::epsilon()) cout << "Division by 0" << endl;
		else {
			float numerator = S * r * pow((1 + r), n);
			if (abs(numerator / denominator - m) - min_m <
				numeric_limits<float>::epsilon()) {
				min_m = abs(numerator / denominator - m);
				min_p = p;
			}
			else
			{
				cout << min_p << "%" << endl;
				break;
			}
		}
		p += 0.01;
		
	}
	return 0;
}
