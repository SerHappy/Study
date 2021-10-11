#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string output_text, inputText;
	int count = 0;
	cout << "Input some text for 37 number: ";
	getline(cin, inputText);
	ofstream outfile("C:/Users/mirea/Desktop/test.txt");
	outfile << inputText << endl;
	outfile.close();

	ifstream readfile("C:/Users/mirea/Desktop/test.txt");
	while (getline(readfile, output_text)) {
		for (char i : output_text)
		{
			if (isdigit(i))
			{
				count += 1;
			}
		}
	}
	readfile.close();
	cout << "The number of occurrences of digits in the string --> " << count << endl;
	return 0;
}
