#include <iostream>

using namespace std;

void swap_v(int a,int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swap_r(int & a, int & b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

/*void swap_cr(const int & a, const int & b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}*/ 

int main()
{
    int x = 7;
    int y = 9;
    swap_r(x,y);
    cout << "x = " << x << " y = " << y << endl;

    swap_v(7,9);

    const int cx = 7;
    const int cy = 9;
   // sawp_cr(cx,cy);
    cout << "cx = " << cx << " cy = " << cy << endl;
    
    //swap_v(7.7,9.9);
    double dx = 7.7;
    double dy = 9.9;
   // swap_r(dx,dy);
    cout << "dx = " << dx << " dy = " << dy << endl;

    //swap_v(7.7,9.9);

    return 0;
}
