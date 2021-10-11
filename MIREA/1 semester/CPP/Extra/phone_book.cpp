#include <iostream>
#include <fstream>
#include <map>
#include <sstream>
#include <vector>
using namespace std;

/*
Dictionaty file:
4
tim 79777777777
tom 12345678901
sam 45766754335
jerry 21436346342
tim
jessy
zak
sam
/**/

/*
Output file:
tim = 79777777777
jessy = Not found!
zak = Not found!
sam = 45766754335
/**/

int main()
{
    map<string, string> contacts;
    string tmp;
    int n;
    ifstream file("c:/users/mirea/desktop/dictionary.txt");
    getline(file, tmp);
    n = stoi(tmp);
    for (int i = 0; i < n; ++i)
    {
        getline(file, tmp);
        vector<string> res;
        istringstream input(tmp);
        while (!input.eof())
        {
            string sub;
            input >> sub;
            res.push_back(sub);
        }
        contacts[res[0]] = res[1];
    }
    ofstream fileout("c:/users/mirea/desktop/output.txt");
    while (getline(file, tmp))
    {
        fileout << tmp << " = ";
        if (contacts.count(tmp) < 1)
        {
            fileout << "Not found!" << endl;
        }
        else
        {
            fileout << contacts[tmp] << endl;
        }
    }
    cout << "Done!";
    file.close();
    fileout.close();
}
