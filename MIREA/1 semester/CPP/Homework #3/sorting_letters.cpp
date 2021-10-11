#include <iostream>
using namespace std;

int main() {
	string line;
	for (int i = 0; i < 30; i++)
	{
		line += 'A' + rand() % ('Z' - 'A');
	}
	cout << "Thirty character string: " << line << endl;
	for (int i = 0; i < line.length(); i++) {
		int min_num = i;
		for (int j = i + 1; j < line.length(); j++) {
			min_num = (line[j] < line[min_num]) ? j : min_num;
		}
		int tmp = line[i];
		line[i] = line[min_num];
		line[min_num] = tmp;
	}
	cout << "String in alphabetical order: " << line << endl;
	return 0;
}
