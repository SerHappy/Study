#include <iostream>

int main()
{
    int S0, m,i,c;
    std::string choice;
    std::cout << "1/2 Variant? : ";
    std::cin >> choice;
    if (choice == "1")
    {
        m = 37;
        i = 3;
        c = 64;
    }
    else
    {
        m = 25173;
        i = 13849;
        c = 65537;
    }
    
    int Sn = 0;
    for (int j = 1; j <= 10; j++)
    {
        S0 = (m * Sn + i) % c;
        Sn = S0;
        std::cout << S0 << '\n';
    }
	return 0;
}
