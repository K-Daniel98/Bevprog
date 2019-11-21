#include "std_lib_facilities.h"

using namespace std;

enum class Month {
    jan = 1,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec
};
class Year {
    private:
        static const int max = 2200;
        static const int min = 1800;
        int y;
    public:
        class Invalid {};
        Year(int x) : y(x) {if(x < min || max <=x) throw Invalid{};}
        int year() {return y;}
};
class Date {
    private:
        Year y;
        Month m;
        int d;
    public:
        Date(Year y, Month m, int d);
        void add_day(int n);
        Month month() {return m;}
        int day() {return d;}
        Year year() {return y;}
};

Date::Date(Year y, Month m, int d) : y {y},m{m},d{d}
{
    if(d > 31 || d < 1)
    {
        cout << "Invalid day (1-31)" << endl;
    }
}

void Date::add_day(int n)
{
    d += n;
}
int main()
{
    try
    {
        Date today {Year{2000},Month::jun,15};
        cout << "Today: " << today.year().year() << "/" << (int)today.month() << "/" << today.day() << endl;

        Date tomorrow = today;
        tomorrow.add_day(1);
        cout << "Tomorrow: " << tomorrow.year().year()   << "/" << (int)tomorrow.month() << "/" << tomorrow.day() << endl;
    }
    catch(Year::Invalid)
    {
        cout << "Invalid year" << endl;
    }

    return 0;
}
