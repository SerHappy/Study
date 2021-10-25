#include <iostream>

using namespace std;

int ReverseNumber(int n, int x = 0)
{
    if (n == 0) return x;
    return ReverseNumber(n / 10, x * 10 + n % 10);
}
int main()
{
    int a;
    cin >> a;
    cout << (a == ReverseNumber(a) ? "palindrom" : "Not palimdrom");
}