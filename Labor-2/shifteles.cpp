#include <iostream>

using namespace std;

int main()
{
    int a = 1;
    int b = 0;

    while(a != 0)
    {
        a = a << 1;
        b ++;
    }

    cout << b;

    return 0;
}