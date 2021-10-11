#include <iostream>
#include <string>
#include <vector>
using namespace std;

int my_strcmp(string str1, string str2)
{
    int len;
    str1.length() > str2.length() ? len = str1.length() : len = str2.length();
    for (int i = 0; i < len; ++i)
    {
        if (str1[i] != str2[i])
        {
            if (str1[i] > str2[i])
                return 1;
            else
                return -1;
        }
    }
    return 0;
}
void sortstr(vector<string> n)
{
    for (int i = 0; i < n.size(); ++i)
    {
        int min = i;
        for (int j = i + 1; j < n.size(); ++j)
        {
            min = (my_strcmp(n[j], n[min]) < 0 ? j : min);
        }
        swap(n[i], n[min]);
    }
    for (auto & i : n)
        cout << i << " ";
}

int main()
{
    vector<string> daysOfWeek = {"Sunday", "Monday", "Tuesday",
                                 "Wednesday", "Thursday", "Friday", "Saturday"};
    sortstr(daysOfWeek);
    return 0;
}
