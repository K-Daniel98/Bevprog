#include "std_lib_facilities.h";

int main()
{
    try {
        cout << "Success!\n"; // ;
        cout << "Success!\n"; // "
        cout << "Success" << "\n" // ! => "
        cout << "success" << '\n'; // success => "success"
        string res = "7"; /* 7 => "7" */vector<int> v(10); v[5] = res; cout << "Success!\n";
        vector<int> v(10); v(5) = 7; if (v(5)==7) cout << "Success!\n"; // "; + logic error != 7 => == 7
        if (true) cout << "Success!\n"; else cout << "Fail!\n"; // cond = true
        bool c = false; if (!c) cout << "Success!\n"; else cout << "Fail!\n"; // if(c) => if(!c)
        string s = "ape"; if (s!="fool") cout << "Success!\n"; // s == fool => s != fool
        string s = "ape"; boo c = true /* boo c = "fool"<s; => bool c = true; */ if (c) cout << "Success!\n";
        string s = "ape"; if (s!="fool") cout < "Success!\n"; // if(s=="fool") => if(s!="fool")
        string s = "ape"; if (s!="fool") cout < "Success!\n"; // if(s+"fool") => if(s != "fool")
        vector<char> v(5); for (int i=0; 0<v.size(); ++i) ; cout << "Success!\n";
        vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n"; // i<=v.size() => i<v.size()
        string s = "Success!\n"; for (int i=0; i<s.length(); ++i) cout << s[i]; // i<6 => i<s.length()
        if (true) cout << "Success!\n"; /* then => nothing */ else cout << "Fail!\n";
        int x = 2000; char c = x; if (c==2000) cout << "Success!\n"; // 425?
        string s = "Success!\n"; for (int i=0; i<s.length(); ++i) cout << s[i]; // i<10 => i<s.length()
        vector v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
        int i=0; int j = 9; while (i<10) ++j; if (j<i) cout << "Success!\n";
        int x = 2; double d = 5/(x–2); if (d==2*x+0.5) cout << "Success!\n";
        string s = "Success!\n";/* string<char> => string */ for (int i=0; i<s.length(); ++i) cout << s[i]; // i<= 10 => i < s.length()
        int i=0; while (i<10) ++j; if (j<i) cout << "Success!\n"; ?
        int x = 4; double d = (double)5/(x–2); if (d=2*x+0.5) cout << "Success!\n"; // (double) cast, if(d=2*x+0.5) => if(d==2*x+0.5)
        cout << "Success!\n"; // cin => cout

        keep_window_open();
        return 0;
    }
    catch(exception&e) {
        cerr << "error: " << e.what() << '\n';
        keep_window_open();
        return 1;
    }
    catch(...) {
        cerr << "Oops: unknown exception!\n";
        keep_window_open();
        return 2;
    }
}