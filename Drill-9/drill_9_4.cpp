#include "std_lib_facilities.h"

using namespace std;

enum class Month {
    jan = 1,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec
};

class Date {
    private:
        int y,d;
        Month m;
    public:
        Date(int y, Month m, int d);
        void add_day(int n);
        Month month() {return m;}
        int day() {return d;}
        int year() {return y;}
};

Date::Date(int y, Month m, int d) 
{
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
    Date today {1978,Month::jun,15};
    cout << "Today: " << today.year() << "/" << (int)today.month() << "/" << today.day() << endl;

    Date tomorrow = today;
    tomorrow.add_day(1);
    cout << "Tomorrow: " << tomorrow.year() << "/" << (int)tomorrow.month() << "/" << tomorrow.day() << endl;

    return 0;
}
