#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char rome_num[100];
    int arabic_num = 0;
    cout << "Input any Rome num using \"I, V, X, L, C, D, M\" (max 100 symbols): ";
    cin.getline(rome_num, 100);
    for (int i = 0; i < strlen(rome_num); i++) {
        int tmp_len = strlen(rome_num);
        switch (rome_num[i]) {
            case 'M':
                arabic_num += 1000;
                break;
            case 'D':
                arabic_num += 500;
                break;
            case 'C':
                if (i + 1 < tmp_len && (rome_num[i + 1] == 'D' || rome_num[i + 1] == 'M')) {
                    arabic_num -= 100;
                } else {
                    arabic_num += 100;
                }
                break;
            case 'X':
                if (i + 1 < tmp_len && (rome_num[i + 1] == 'C' || rome_num[i + 1] == 'L')) {
                    arabic_num -= 10;
                } else {
                    arabic_num += 10;
                }
                break;
            case 'L':
                arabic_num += 50;
                break;
            case 'V':
                arabic_num += 5;
                break;
            case 'I':
                if (i + 1 < tmp_len && (rome_num[i + 1] == 'V' || rome_num[i + 1] == 'X')) {
                    arabic_num -= 1;
                } else {
                    arabic_num += 1;
                }
                break;
        }
    }
    cout << "Rome num: " << rome_num << " --> " << "Arabic num: " << arabic_num << endl;
    return 0;
}
