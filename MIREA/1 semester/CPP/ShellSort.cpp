#include <iostream>
using namespace std;

void ShellSort(int n, int mass[])
{
    int gap = n / 2;
    while (gap > 0)
    {
        for (int i = gap; i < n; ++i)
        {
            int current_value = mass[i];
            int pos = i;

            while (pos >= gap && mass[pos - gap] > current_value)
            {
                mass[pos] = mass[pos - gap];
                pos -= gap;
                mass[pos] = current_value;
            }
        }
        gap /= 2;
    }
}

int main()
{
    int mass[8] = {657, 67, 334, 99, 22, 80, 34, -567};
    ShellSort(8, mass);
    for (int i = 0; i < 8; ++i)
    {
        cout << mass[i] << " ";
    }
}