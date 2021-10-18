#include <iostream>
#include <string>

using namespace std;

string rot13(string line)
{
    string result = "";
    for (int i = 0; i < line.length(); ++i)
    {
        if ((line[i]) >= 'A' && (line[i]) <= 'M' || (line[i]) >= 'a' && (line[i]) <= 'm')
            result.push_back(line[i] += 13);
        else if ((line[i]) >= 'N' && (line[i]) <= 'Z' || (line[i]) >= 'n' && (line[i]) <= 'z')
            result.push_back(line[i] -= 13);
        else
            result.push_back(line[i]);
    }
    return result;
}

int main()
{
    string str;
    getline(cin, str);
    cout << rot13(str);
}