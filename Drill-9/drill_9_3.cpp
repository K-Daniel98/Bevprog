#include "std_lib_facilities.h"

using namespace std;

class Date {
    private:
        int y,m,d;
    public:
        Date(int y, int m, int d);
        void add_day(int n);
        int month() {return m;}
        int day() {return d;}
        int year() {return y;}
};

Date::Date(int y, int m, int d) 
{
    if(m > 12 || m < 1)
    {
        cout << "Invalid month (1-12)" << endl;
    }
    if(d > 31 || d < 1)
    {
        cout << "Invalid day (1-31)" << endl;
    }
    this->y = y;
    this->m = m;
    this->d = d;
}
void Date::add_day(int n)
{
    d += n;
}
int main()
{
    Date today {1978,6,15};
    cout << "Today: " << today.year() << "/" << today.month() << "/" << today.day() << endl;

    Date tomorrow = today;
    tomorrow.add_day(1);
    cout << "Tomorrow: " << tomorrow.year() << "/" << tomorrow.month() << "/" << tomorrow.day() << endl;

    return 0;
}
