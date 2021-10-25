#include <iostream>
#include <string>
#include <cmath>

const int pi = 3.14;
using namespace std;

int main()
{
    char my_string;
    int my_number;
    if (cin >> my_string >> my_number)
    {
        switch (my_string)
        {
        case 'R':
            cout << "D = " << my_number * 2 << endl;
            cout << "L = " << 2 * pi * my_number << endl;
            cout << "S = " << pi * my_number * my_number << endl;
            break;
        case 'D':
            cout << "R = " << my_number / 2 << endl;
            cout << "L = " << 2 * pi * (my_number/2) << endl;
            cout << "S = " << pi * (my_number/2) * (my_number/2) << endl;
            break;
        case 'L':
            cout << "R = " << my_number / (2*pi) << endl;
            cout << "D = " << 2 * (my_number / (2*pi)) << endl;
            cout << "S = " << pi * (my_number / (2*pi)) * (my_number / (2*pi)) << endl;
            break;
        case 'S':
            cout << "R = " << sqrt(my_number / pi) << endl;
            cout << "D = " << 2 * sqrt(my_number / pi) << endl;
            cout << "L = " << 2* pi * sqrt(my_number / pi) << endl;
            break;
        default:
            break;
        }
    }
}