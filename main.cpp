#include <iostream>
#include <cmath>
#include "def.h"
using namespace std;
int main()
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