#include <iostream>
#include <string>
using namespace std;

int main()
{
    string x;
    cout << "Input a number and programm delete all '0' and '5' chars: ";
    cin >> x;
    string final_num;
    for (char i : x)
        (int(i) - 48) % 5 == 0 ? final_num : final_num += i;
    cout << "The result is --> " << final_num;
}
