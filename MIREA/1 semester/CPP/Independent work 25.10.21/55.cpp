#include <iostream>

using namespace std;

int main()
{
    int a[5][9], sum = 0;
    for (int i = 0; i < 5; ++i){
        for (int j = 0; j < 9; ++j){
            cin >> a[i][j];
            if (j%2 !=0){
                sum += a[i][j];
            }
        }
    }
    cout << sum;
}