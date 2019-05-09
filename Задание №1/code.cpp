#include <iostream>
using namespace std;
int main()
{
	int n=0;
	double x[10]{ 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < 10;  i++)
	{
		if (x[i] <= -2)
		{
			x[i] = pow(x[i], 2);
			n++;
		}
	}
	if (n < 1)
	{
		for (int i = 0; i < 10; i++)
		{
			x[i] = x[i] * 0.1;
		}
	}
	cout << "X1=" << x[0] << " X2=" << x[1] << " X3=" << x[2] << " X4=" << x[3] << " X5=" << x[4] << " X6=" << x[5] << " X7=" << x[6] << " X8=" << x[7] << " X9=" << x[8] << " X10=" << x[9] << endl;
}
