#include <iostream>
#include <string>
using namespace std;

string DexToBin(unsigned int n) {
   string bin;
   while (n > 0) {
       if (n % 2 == 0) bin = "0" + bin;
       else bin = "1" + bin;
       n /= 2;
   }
   return bin;
}

unsigned int BinToDex(unsigned int n) {
   int base = 1;
   int val = 0;
   while (n) {
       unsigned int last = n % 10;
       n /= 10;
       val += last * base;
       base *= 2;
   }
   return val;
}
void DexToIP(unsigned int n) {
   int ip[4] = { 0,0,0,0 };
   int count = 0,  count_cell = 0;
   string cell;
   string bin = DexToBin(n);
   for (int i = 0; i < bin.length(); ++i) {
       cell += bin[i];
       count++;
       if (count == 8 || count == bin.length()) {
           ip[count_cell] = BinToDex(stol(cell));
           count_cell++;
           cell = "";
           count = 0;
       }
   }
   for (int i = 0; i < 4; ++i) i == 3 ? cout << ip[i] : cout << ip[i] << ".";
}
int main() {
unsigned int n;
cin >> n;
   DexToIP(n);
return 0;
}
