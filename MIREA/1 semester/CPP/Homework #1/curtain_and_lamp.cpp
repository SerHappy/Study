#include <iostream>
using namespace std;

int main() {
	string time, curtain, lamp;
	cout << "Day/Night:";
	cin >> time;
	cout << "Curtain On/Off:";
	cin >> curtain;
	cout << "lamp On/Off:";
	cin >> lamp;
	cout << (((time == "Day" && curtain == "On") || lamp == "On") ? "Light" : "No Light");
	return 0;
}
