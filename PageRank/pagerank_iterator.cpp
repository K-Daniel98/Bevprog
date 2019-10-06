#include <iostream>
#include <stdio.h>
#include <math.h>
#include <vector>

using namespace std;

void kiir(vector<double> vektor)
{
    vector<double>::iterator vektorIt;
    for(vektorIt = vektor.begin();vektorIt < vektor.end();vektorIt++)
        cout << *vektorIt << endl;
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
    double L[4][4] = {
        {0.0,0.0,1.0 / 3.0, 0.0},
        {1.0,1.0 / 2.0, 1.0 / 3.0, 1.0},
        {0.0,1.0 / 2.0,0.0,0.0},
        {0.0,0.0,1.0 / 3.0,0.0}
    };
    vector<double> PR {0.0,0.0,0.0,0.0};
    vector<double> PRv {1.0 / 4.0,1.0 / 4.0, 1.0 / 4.0, 1.0 / 4.0};

    vector<double>::iterator PRIterator;
    vector<double>::iterator PRvIterator = PRv.begin();

    for(;;)
    {
        for(PRIterator = PR.begin();PRIterator < PR.end();PRIterator++)
        {
            *PRIterator = 0.0;
            
            // i = PRIterator - PR.begin(); j = PRvIterator - PRv.begin(); 
            // taken from https://stackoverflow.com/questions/2152986/what-is-the-most-effective-way-to-get-the-index-of-an-iterator-of-an-stdvector

            for(PRvIterator;PRvIterator < PRv.end(); PRvIterator++)
                *PRIterator += (L[PRIterator - PR.begin()][PRvIterator - PRv.begin()] * *PRvIterator);
        }

        if ( tavolsag(PR,PRv) < 0.00001)
            break;

        for(PRIterator = PR.begin(), PRvIterator = PRv.begin();PRIterator < PR.end(); PRIterator++,PRvIterator++)
            *PRvIterator = *PRIterator;
    }
    kiir(PR);
    return 0;
}
