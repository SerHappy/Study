#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int x;
    cout << "Input a number and programm delete all '0' and '5' chars: ";
    cin >> x;
    int final_num = 0;
    int i = 10;
    int j = 1;
    while (i <= pow(10, to_string(x).length()))
    {
        if ((x % i) / j == 5 || (x % i) / j == 0)
        {
            x = (x / i) * j + (x % j);
        }
        else
        {
            i *= 10;
            j *= 10;
        }
    }
    cout << x;
}
