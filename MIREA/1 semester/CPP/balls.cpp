#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "0123456789";
    int sum = 0;
    do
    {
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == '0' + i)
            {
                sum++;
                break;
            }
        }
    } while (next_permutation(s.begin(), s.end()));
    cout << sum;
}