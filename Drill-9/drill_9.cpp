#include "std_lib_facilities.h"

using namespace std;

struct Date {
    int y;
    int m;
    int d;
};
void init_day(Date & dd, int y, int m, int d)
{
    if(m > 12 || m < 1)
    {
        cout << "Invalid month (1-12)" << endl;
        return;
    }
    if(d > 31 || d < 1)
    {
        cout << "Invalid day (1-31)" << endl;
        return;
    }
    dd.y = y;
    dd.m = m;
    dd.d = d;
}
void add_day(Date & dd,int n)
{
    dd.d += n;
}
int main()
{
    Date today;
    init_day(today,1978,6,25);
    cout << "Today: " << today.y << "/" << today.m << "/" << today.d << endl;

    Date tomorrow = today;;
    add_day(tomorrow,1);
    cout << "Tomorrow: " << tomorrow.y << "/" << tomorrow.m << "/" << tomorrow.d << endl;

    return 0;
}
