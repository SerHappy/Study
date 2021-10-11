#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
using namespace std;


float area_rectangle(float x, float y)
{
	return x*y;
}

float area_triangle(float a, float b, float c)
{
	float p = (a + b + c) / 2;
	return sqrt(p*(p-a)*(p-b)*(p-c));
}

float area_circle(float r)
{
	return M_PI * r * r;
}

int main() {
	int choice;
	cout << "Input 1, 2 or 3: ";
	cin >> choice;
	switch (choice)
	{
	case 1:
		float x, y;
		cout << "Input x and y for rectangle: ";
		cin >> x >> y;
		cout << "S= " << area_rectangle(x, y) << endl;
		break;
	case 2:
		float a, b, c;
		cout << "Input a,b,c for triangle: ";
		cin >> a >> b >> c;
		cout << "S= " << area_triangle(a, b, c) << endl;
		break;
	case 3:
		float r;
		cout << "Input r for circle: ";
		cin >> r;
		cout << "S= " << area_circle(r) << endl;
		break;
	default: cout << "Wrong input" << endl;
	}
	return 0;
}
