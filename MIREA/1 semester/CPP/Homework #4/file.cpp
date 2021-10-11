#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string outputText, inputText;
	float result = 0;
	cout << "10 nums: ";
	for (int i = 0; i < 10; i++)
	{
		int x = rand();
		cout << x << " ";
		inputText += to_string(x) + " ";
	}
	cout << endl;
	ofstream outfile("D:/test.txt");
	outfile << inputText << endl;
	outfile.close();

	ifstream readfile("D:/test.txt");
	while(getline(readfile, outputText))
	{
		string tmp_num;
		for (char i : outputText)
		{
			if(i == ' ')
			{
				result += ::stof(tmp_num);
				tmp_num = "";
			}
			else
			{
				tmp_num += i;
			}
		}
	}
	cout << "sum: " << result << endl;
	readfile.close();
	return 0;
}
