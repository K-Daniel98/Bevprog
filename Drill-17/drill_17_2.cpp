#include <iostream>
#include <vector>

using namespace std;

int pow(int a,int b)
{
    return a^b;
}
void print_array(ostream & os, int * a, int n)
{
    os << "Values in the array: " << endl;
    for(int i=0;i<n;i++)
    {
        os << a[i] << endl;
    }
    os << endl;
}

int main()
{
    int n = 7;
    int * p1 = &n;
    cout << "p1 points: " << p1 << " - Value: " << *p1 << endl;

    int * array = new int[7];
    for(int i=0;i<7;i++)
    {
        array[i] = pow(2,i);
    }
    int * p2 = array;
    cout << "The array p2 points to: " << p2<< endl;
    print_array(cout,p2,7);

    int * p3 = p2;
    p2 = p1;
    p2 = p3;
    cout << "p2 points to: " << p2 << endl;
    print_array(cout,p2,7);
    cout << "p1 points to: " << p1 << endl;
    print_array(cout,p1,7);

    delete [] p1;
    delete [] array;
    delete [] p2;
    delete [] p3;

    int * array2 = new int[10];
    for(int i=0;i<7;i++)
    {
        array2[i] = pow(2,i);
    }
    p1 = array2;

    int * array3 = new int[10];
    p2 = array3;

    for(int i=0;i<10;i++)
    {
        p2[i] = p1[i];
    }
    print_array(cout,p2,10);

    delete [] p1;
    delete [] p2;
    delete [] array3;
    delete [] array2;

    vector<int> vec;
    for(int i=0;i<10;i++)
    {
        vec.push_back(pow(2,i));
    }

    vector<int> vec2;

    for(int i=0;i<vec.size();i++)
    {
        vec2.push_back(vec[i]);
    }
    cout << "Elements in the vector: " << endl;
    for(int i=0;i<vec.size();i++)
    {
        cout << p2[i] << endl;
    }

    return 0;
}
