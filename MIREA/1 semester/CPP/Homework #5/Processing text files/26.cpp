#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string str;
    char old_chr, new_chr;
    cout << "Input string: ";
    getline(cin, str);
    cout << endl;
    cout << "Replace symbol (input 1) to (input 2):";
    cin >> old_chr >> new_chr;
    ofstream file("C:/Users/mirea/Desktop/test.txt");
    file << str;
    file.close();
    fstream fs("C:/Users/mirea/Desktop/test.txt", fstream::in | fstream::out);
    if (fs.is_open()) {
        while (!fs.eof()) {
            if (fs.get() == old_chr) {
                fs.seekp((fs.tellp() - static_cast<streampos>(1)));
                fs.put(new_chr);
                fs.seekp(fs.tellp());
            }
        }
        cout << "Success!";
        fs.close();
    } else {
        cout << "Faild to open" << '\n';
    }
    return 0;
}
