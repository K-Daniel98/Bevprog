#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    
    // csere kulombseggel es osszeggel
    cout << "Adjon meg ket szamot: " << endl;
    cin >> a >> b;
    
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
    
    cout << "Valtozok cserelve xorral: \nElso: " << a << "\nMasodik: " << b << endl;
    
    return 0;
}
