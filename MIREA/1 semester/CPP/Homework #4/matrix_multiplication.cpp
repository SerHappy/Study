#include <iostream>
using namespace std;
int main()
{
	double A[3][4]= { {5, 2, 0, 10}, {3, 5, 2, 5}, {20, 0, 0, 0} };
	double B[4][2] = { {1.20, 0.50}, {2.80, 0.40}, {5.00, 1.00}, {2.00, 1.50}};
	double C[3][2] = { {0,0}, {0,0}, {0,0} };
	double max_sum = 0, max_com = 0;
	for (int row = 0; row < 3; ++row)
	{
		for(int col = 0; col < 2; ++col)
		{
			C[row][col] = 0;
			for (int k = 0; k < 4; ++k)
				C[row][col] += A[row][k] * B[k][col];
			if (col == 0) max_sum += C[row][col];
			else max_com += C[row][col];
		}
	}
	cout << "1) Seller " << ((C[0][0] >= C[1][0] && C[0][0] >= C[2][0]) ? 1 : (C[1][0] >= C[0][0] && C[1][0] >= C[2][0]) ? 2 : 3) << "!" << endl;
	cout << "2) Seller " << ((C[0][0] <= C[1][0] && C[0][0] <= C[2][0]) ? 1 : (C[1][0] <= C[0][0] && C[1][0] <= C[2][0]) ? 2 : 3) << "!" << endl;
	cout << "3) Total amount of money is: " << max_sum << "!" << endl;
	cout << "4) Total amount of commission is: " << max_com << "!" << endl;
	cout << "5) Total number of money is: " << max_com+max_sum << "!" << endl;
	return 0;
}
