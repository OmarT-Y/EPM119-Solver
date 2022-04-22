#include <iostream>
#include <cmath>
#include "def.h"
using namespace std;
int main()
{
    int mode;
    cout << "Choose a mode number : 1 Uniform payment     2 Cap value: ";
    cin >> mode;
    if (mode == 1)
    {
        cashflow input;
        cout << "Enter Lifetime: ";
        cin >> input.N;
        cout << "Enter First Cost: ";
        cin >> input.FC;
        cout << "Enter AOC: ";
        cin >> input.AOC;
        cout << "Enter Annual Revenue: ";
        cin >> input.AR;
        cout << "Enter Salvage Value: ";
        cin >> input.VS;
        cout << "Enter Interest Rate in decimal format: ";
        cin >> input.i;

        cout << "Present Value = " << PV(input) << endl << "Annual Cost = " << ACA(input);
    }
    else if (mode == 2)
    {
        int numofs;
        int CapFC;
        cout << "Enter Annual Interest Rate: ";
        cin >> i0;
        cout << "Enter number of Series: ";
        cin >> numofs;
        cout << "Enter the First cost: ";
        cin >> CapFC;
        Capflow Cap[10];
        long long Pvalue = CapPV(Cap, CapFC, numofs);
        cout <<"Present Value = " << Pvalue<<endl;
        cout << "Annual Cost = " << CapACA(Pvalue, i0);
    }
}