#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int row, col;
    cout << "Input array size: ";
    cin >> row >> col;
    vector<vector<int>> a(row, vector<int>(col));
    vector<int> sum(col);
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            cout << "Input element " << i << " " << j << ": ";
            cin >> a[i][j];
            sum[j] += a[i][j];
        }
    }
    for(int i = 0; i < sum.size(); ++i) cout << "Sum of the " << i+1 << " colomn --> " << sum[i] << endl;
}
