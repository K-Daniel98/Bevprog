#include <iostream>
#include <vector>

using namespace std;

void print_array10(ostream& os, int * a)
{
    cout << "Elements in the array: " << endl;
    for(int i=0;i<10;i++)
    {
        os << a[i] << endl;
    }
}
void print_array(ostream & os,int * a, int n)
{
    cout << "Elements in the array: " << endl;
    for(int i=0;i<n;i++)
    {
        os << a[i] << endl;
    }
    cout << endl;
}
void print_vector(ostream & os, vector<int> & vec)
{
    cout << "Elements in the vector: " << endl;
    for(int i=0;i<vec.size();i++)
        cout << vec[i] << endl;
}

int main()
{
    int * array = new int[10];
    for(int i=0;i<10;i++)
    {
        cout << array[i] << endl;
    }
    print_array10(cout,array);
    delete [] array;

    int * array2 = new int[10];
    for(int i=0;i<10;i++)
    {
        array2[i] = 100+i;
    }
    print_array10(cout,array2);;
    delete [] array2;  

    int * array3 = new int[11];

    for(int i=0;i<11;i++)
    {
        array3[i] = 100+i;
        cout << array3[i] << endl;
    }
    print_array(cout,array3,11);
    delete [] array3;

    int * array4 = new int[20];
    for(int i=0;i<20;i++)
    {
        array4[i] = 100+i;
        cout << array4[i] << endl;
    }
    print_array(cout,array4,20);
    delete [] array4;

    vector<int> vec;
    for(int i=0;i<10;i++)
    {
        vec.push_back(100+i);
    }
    print_vector(cout,vec);

    vector<int> vec2;
    for(int i=0;i<11;i++)
    {
        vec2.push_back(100+i);
    }
    print_vector(cout,vec2);

    vector<int> vec3;
    for(int i=0;i<10;i++)
    {
        vec3.push_back(100+i);
    }
    print_vector(cout,vec3);

    return 0;
}
