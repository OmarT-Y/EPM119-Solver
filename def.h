using namespace std;
struct cashflow
{
    int N, FC, VS, AOC, AR;
    float i;
};
float i0;
float i_N(float i0,int N)
{
    float iN = pow(i0 + 1, N) - 1;
    return iN;
}
struct Capflow
{
    int A,N,AR;
    float i;
};
int PV(cashflow f1)
{
    double Pval = -f1.FC;
    Pval += f1.VS / pow(1 + f1.i, f1.N);
    Pval += (f1.AR - f1.AOC) * ((1 - (pow(1 + f1.i, -f1.N))) / f1.i);
    return round(Pval);
}
int ACA(cashflow f1)
{
    return (PV(f1) * f1.i) / (1 - pow(1 + f1.i, -f1.N));
}
long long CapPV1(Capflow f1)
{
    double Pval1 = ((f1.AR-f1.A) / f1.i);
    return round(Pval1);
}
long long CapPV(Capflow f[], long long CapFC, int num)
{
    long long Pval = -CapFC;
    for (int o = 0; o < num; o++)
    {   
        cout << 1 + o << endl;
        cout << "Enter AOC: "  ;
        cin >> f[o].A;
        cout << "Enter period: ";
        cin >> f[o].N;
        f[o].i = i_N(i0,f[o].N);
        cout << "Enter Annual Revenue: ";
        cin >> f[o].AR;
        Pval += CapPV1(f[o]);
        cout << endl;
    }
    return Pval;
}
int CapACA(long long p, float ii)
{
    return p * ii;
}