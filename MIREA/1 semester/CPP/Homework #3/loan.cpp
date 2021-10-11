#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float S, p, n;
	cout << "Input 'S', 'p' and 'n' to calculate 'm': ";
	cin >> S >> p >> n;
	float r = p / 100;
	float numerator = S * r * pow((1 + r), n);
	float denominator = 12 * (pow((1 + r), n) - 1);
	if (denominator < numeric_limits<float>::epsilon()) cout << "Division by 0"; else {
		cout << "Your monthly payment: " << numerator / denominator << endl;
	}
	return 0;
}
