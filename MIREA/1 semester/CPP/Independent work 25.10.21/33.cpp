#include <iostream>

using namespace std;

int main()
{
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    bool flag = true;
    for (int i = 0; i < 10; ++i)
    {
        if ((A[i] > A[1]) && (A[i] < A[9]))
        {
            cout << i;
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "0";
}