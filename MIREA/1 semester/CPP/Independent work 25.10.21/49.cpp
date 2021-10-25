#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    int i = 1;
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    if (arr[0] < arr[1])
        cout << "0" << " ";
    while (i < n - 1)
    {
        if (arr[i] < arr[i + 1] || arr[i] > arr[i - 1])
            cout << i << " ";
        ++i;
    }
    if (arr[n - 1] > arr[n - 2])
        cout << n - 1 << " ";
    delete[] arr;
}