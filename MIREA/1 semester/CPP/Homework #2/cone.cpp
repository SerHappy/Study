#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
using namespace std;

int main() {
	float h, R, r, l;
	cout << "Input 'h', 'R', 'r', 'l' to calculate answers: ";
	cin >> h >> R >> r >> l;
	if (h <= 0 || R <= 0 || r <= 0 || l <= 0) {
		cout << "No cone";
	}
	else {
		cout << "V = " << static_cast<float>(1) / 3 * M_PI * 
			h * (R * R + R * r + r * r) << endl;
		cout << "S = " << M_PI * (R * R +
			(R + r) * l + r * r);
	}
}
