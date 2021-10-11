#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string outputText, inputText;
	cout << "Input some text: ";
	getline(cin, inputText);
	ofstream outfile("C:/Users/mirea/Desktop/test.txt");
	outfile << inputText << endl;
	outfile.close();
	ifstream readfile("C:/Users/mirea/Desktop/test.txt");
	cout << "Text from the file: ";
	while (getline(readfile, outputText)) {
		cout << outputText << "\n";
	}
	readfile.close();
	return 0;
}
