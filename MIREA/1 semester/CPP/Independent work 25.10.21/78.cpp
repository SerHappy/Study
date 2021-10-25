#include <iostream>
#include <string>

using namespace std;
bool Check3(string N){
    for (int i = 0; i < N.length(); ++i){
        if (N[i] == '3'){
            return true;
            break;
        }
    }
    return false;
}
int main()
{
    string n;
    int N;
    cin >> n;
    cin >> N;
    cout << (Check3(n) ? "YES":"NO") << endl;
    cout << (Check3(to_string(N)) ? "YES":"NO");
}