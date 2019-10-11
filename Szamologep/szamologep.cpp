#include "std_lib_facilities.h"

using namespace std;

int main()
{
        
    cout << "Please enter an expression (+ , - , * , / )" << endl;
    double leftVal = 0.0;
    double rightVal;
    char op;
    try
    {
        while(cin >> leftVal >> op >> rightVal)
        {
            if(!cin)
            {
                error("Error");
            }
            switch(op)
            {
                case '+':
                    leftVal += rightVal;
                    break;
                case '-':
                    leftVal -= rightVal;
                    break;
                case '*':
                    leftVal *= rightVal;
                    break;
                case '/':
                    leftVal /= rightVal;
                    break;
                default :                
                    break;
            }
            cout << "Result: " << leftVal << endl;
        }
    
    }
    catch(const std::exception& e)
    {
        cerr << e.what() << endl;
        keep_window_open();
        return 1;
    }
    catch(...)
    {
        cerr << "Error" << endl;
        keep_window_open();
        return 1;
    }


    return 0;
}
