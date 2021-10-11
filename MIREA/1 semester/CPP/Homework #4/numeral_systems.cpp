#include <iostream>
#include <string>

using namespace std;
int main()
{
    string alphabet = "0123456789abcdefghijklmnopqrstuvwxyz";
	int maxRadix = alphabet.length();

    string base_number;
	int base_radix, final_radix;
    cout << "Enter number, base radix(max 36) and to radix(max 36): ";
    cin >> base_number >> base_radix >> final_radix;
    if (base_radix < 2 || base_radix > maxRadix || final_radix < 2 || final_radix > maxRadix )
    {
        cout << "Wrong input";
        return 1;
    }

    for (int i = 0; i < base_number.length(); i++)
    {
        int pos = alphabet.find(tolower(base_number[i]));
        if (pos >= base_radix)
        {
            cout << "Wrong symbol in value '" << base_number << "'" << endl;
            return 1;
        }
    }

    int decimal_number = 0;

    for (char i : base_number)
    {
        char k = tolower(i);
        decimal_number = decimal_number * base_radix + ((k >= 'a') ? k - 'a' + 10 : k - '0');
    }

    string result;
    while (decimal_number)
    {
        char elem = toupper(alphabet[decimal_number % final_radix]);
        result = elem + result;
        decimal_number /= final_radix;
    }

    cout << "The conversion '" << base_number << "' from " << base_radix << " radix to " << final_radix << " radix is --> " << result << endl;
	return 0;
}
