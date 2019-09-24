#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int b = 13;
    
    // csere kulombseggel es osszeggel

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "Valtozok cserelve a kulombseggel: \nElso: " << a << "\nMasodik: " << b << endl;

    // csere szorzattal

    a = a * b;
    b = a / b;
    a = a / b;

    cout << "Valtozok cserelve szorzattal: \nElso: " << a << "\nMasodik: " << b << endl;

    // csere xorral

    a = a xor b;
    b = a xor b;
    a = a xor b;

    cout << "Valtozok cserelve xorral: \nElso: " << A << "\nMasodik: " << b << endl; 

    return 0;
}