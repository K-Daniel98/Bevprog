#include <iostream>
#include <stdio.h>
#include <math.h>
#include <vector>

using namespace std;

void kiir(vector<double>::iterator begin,vector<double>::iterator end)
{
    while(begin < end)
    {
        cout << *begin << endl;
        begin++;
    }
}

double tavolsag(vector<double> PR,vector<double> PRv)
{
    double osszeg = 0;
    vector<double>::iterator PRIterator = PR.begin();
    vector<double>::iterator PRvIterator = PRv.begin();
    for(PRIterator;PRIterator<PR.end();PRIterator++,PRvIterator++)
    {
        osszeg += (*PRvIterator- *PRIterator) * (*PRvIterator- *PRIterator);
    }
    return sqrt(osszeg);
}

int main()
{
    vector<vector<double>> L {
        {0.0,0.0,1.0 / 3.0, 0.0},
        {1.0,1.0 / 2.0, 1.0 / 3.0, 1.0},
        {0.0,1.0 / 2.0,0.0,0.0},
        {0.0,0.0,1.0 / 3.0,0.0}
    };
    vector<double> PR {0.0,0.0,0.0,0.0};
    vector<double> PRv {1.0 / 4.0,1.0 / 4.0, 1.0 / 4.0, 1.0 / 4.0};

    vector<double>::iterator PRIterator;
    vector<double>::iterator PRvIterator;
    int i,j;
    for(;;)
    {
        for(i = 0;i<4;i++)
        {
            PR[i] = 0.0;
            for(j = 0;j<4;j++)
                PR[i] += (L[i][j] * PRv[j]);
        }
        for(PRIterator = PR.begin(); PRIterator < PR.end();PRIterator++)
        {
            *PRIterator = 0.0;
            for(PRvIterator = PRv.begin();PRvIterator < PRv.end();PRvIterator++)
                *PRIterator += (L[PRIterator - PR.begin()][PRvIterator - PRv.begin()] * *PRvIterator);
        }

        if ( tavolsag(PR,PRv) < 0.00001)
            break;

        for(PRIterator = PR.begin(), PRvIterator = PRv.begin(); PRIterator < PR.end();PRIterator++,PRvIterator++)
        {
            *PRvIterator = *PRIterator;
        }
    }
    kiir(PR.begin(),PR.end());
    return 0;
}
