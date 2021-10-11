#include <iostream>
using namespace std;
int main(){
	for (int row = 0; row < 13; row++)
	{
		for (int column = 0; column < 49; column++)
		{
			if (row > 0 && row < 7 && column < 8) cout << "*";
			else cout << "-";
		}
		cout << endl;
	}
	return 0;
}
