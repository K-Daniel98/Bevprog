#include "std_lib_facilities.h"

using namespace std;

template<typename T>
struct S
{
    private:
        T val;
    public:
        S(T val)
        {
            this->val = val;
        }
        T & get();
        T & get() const;
        void set(const T&);
        void operator=(const T&);
};

template<typename T>
T& S<T>::get()
{
    return this->val;
}
template<typename T>
T& S<T>::get() const
{
    return this->val;
}
template<typename T>
void S<T>::set(const T& s)
{
    val = s;
}
template<typename T>
void S<T>::operator=(const T& s)
{
    val = s;
}

template<typename T>
void read_val(T & v)
{
    cin >> v;
}

int main()
{
    try
    {
         cout << endl;

        S<int> i(76);
        S<char> c('y');
        S<double> d(6.55);
        S<string> s("hjrff");
        S<vector<int>> v(vector<int>{1,2,3});

        cout << "Values:" << endl;
        cout << i.get() << endl;
        cout << c.get() << endl;
        cout << d.get() << endl;
        cout << s.get() << endl;

        cout << endl;

        cout << "Vector: " << endl;
        for(int elem : v.get())
            cout << elem << " ";
        cout << endl;

        cout << "Enter an int" << endl;
        int i_r;
        read_val(i_r);
        i.set(i_r);

        cout << "Enter a char" << endl;
        char c_r;
        read_val(c_r);
        c.set(c_r);

        cout << "Enter a double" << endl;
        double d_r;
        read_val(d_r);
        d.set(d_r);

        cout << "Enter a string" << endl;
        string s_r71;
        read_val(s_r71);
        s.set(s_r71);

        cout << endl;

        cout << "Values:" << endl;
        cout << i.get() << endl;
        cout << c.get() << endl;
        cout << d.get() << endl;
        cout << s.get() << endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}
