#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string output_text, sub;
	bool first = true;
	ifstream file("C:/Users/mirea/Desktop/test.txt");
	cout << "Only nums from the file: ";
	while (getline(file, output_text)) {
		for (int i = 0; i < output_text.length(); i++)
		{
			if (first || output_text[i] == ' ') {
				bool num = true;
				first = false;
				int j = i+1;
				while (output_text[j] != ' ' && j < output_text.length()) {
					
					if (!isdigit(output_text[j])) {
						num = false;
						break;
					}
					sub += output_text[j];
					j++;
				}
				if (num) {
					cout << sub << " ";
				}
				sub = "";
			}
		}
	}

	cout << endl;
	file.close();
	return 0;
}
