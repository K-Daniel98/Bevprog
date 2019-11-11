#include "std_lib_facilities.h"

using namespace std;

int ga [10];

void f(int arr [],int n)
{
    int la [10];
    cout << "Elements in la: " << endl;
    for(int i = 0;i<n;i++)
    {
        la[i] = arr[i];
        cout << la[i] << " ";
    }
    cout << endl;
    int * p = new int[n];
    cout << "Elements in the free-store array: " << endl;
    for(int i=0;i<n;i++)
    {
        p[i] = arr[i];
        cout << p[i] << " ";
    }
    cout << endl;
    delete [] p;
}
int fact(int n)
{
    int result = 1;
    for(int i=1;i<=n;i++)
        result *= i;
    return result;
}
int main()
{
    for(int i=0;i<10;i++)
        ga[i] = pow(2,i);
    f(ga,10);
    cout << endl;

    int aa [10];
    for(int i=1;i<=10;i++)
        aa[i-1] = fact(i);
    f(aa,10);
    return 0;
}
