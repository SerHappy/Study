#include <iostream>
#include <string>

using namespace std;

unsigned int BinToDex(unsigned int n)
{
    int base = 1;
    int val = 0;
    while (n)
    {
        unsigned int last = n % 10;
        n /= 10;
        val += last * base;
        base *= 2;
    }
    return val;
}

string BinToChar(string line)
{
    string result = "";
    string one_symbol = "";
    if (line.length() < 8)
        return "Wrong";
    else
    {
        for (int i = 0; i < line.length(); ++i)
        {
            one_symbol.push_back(line[i]);
            if (one_symbol.length() == 8)
            {
                result.push_back(char(BinToDex(stoi(one_symbol))));
                one_symbol = "";
            }
        }
        return result;
    }
}

int main()
{
    string bin;
    getline(cin, bin);
    cout << BinToChar(bin);
}