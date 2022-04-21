struct cashflow
{
	int N, FC, VS, AOC;
	float i;
};
int PV(cashflow f1)
{
	float Pval = -f1.FC;
	Pval += f1.VS / pow(1 + f1.i, f1.N);
	Pval -= f1.AOC*(1 - (pow(1 + f1.i, f1.N)) / f1.i);
	return round(Pval);
}
int ACA(int Pval, float i)
{

}