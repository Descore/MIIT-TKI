#include <iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
#define n 3
using namespace std;
int i;
double a[n], b[n], an[n], S[n], h[n], max, c[n], p[n];
void input()
{
	cout << "Input 1 side a[n]\n";
	for (i = 0; i < n; i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
	cout << "\n";
	cout << "Input 2 side b[n]\n";
	for (i = 0; i < n; i++)
	{
		cout << "b[" << i << "]=";
		cin >> b[i];
	}
	cout << "\n";
	cout << "Input angle between 1 and 2 sides an[n]\n";
	for (i = 0; i < n; i++)
	{
		cout << "an[" << i << "]=";
		cin >> an[i];
	}
	cout << "\n";
}

void calc()
{ 
	for (i = 0; i < n; i++)
	{
		c[i] = sqrt(a[i] * a[i] + b[i] * b[i] - 2 * a[i] * b[i] * cos(an[i]*3.14/180));
	}
	cout << "Side 'c'[1] =" << c[0] << "  Side 'c'[2] =" << c[1] << "  Side 'c'[3] =" << c[2] << "\n";
	cout << "\n";

	for (i = 0; i < n; i++)
	{
		S[i] = (0.5) * a[i] * b[i] * sin(an[i] * 3.14 / 180);
	}
	cout << "Square [1]=" << S[0] << "  Square [2]=" << S[1] << "  Square [3]=" << S[2] << "\n";
	cout << "\n";

	for (i = 0; i < n; i++)
	{
		p[i] = (0.5)*(a[i] + b[i] + c[i]);
		h[i] = (2 * sqrt(p[i] * (p[i] - a[i])*(p[i] - b[i])*(p[i] - c[i]))) / a[i];
	}
	cout << "Height [1]=" << h[0] << "  Height [2]=" << h[1] << "  Height [3]=" << h[2] << "\n";
	cout << "\n";
}
void maximum()
{
	double max;
	max = h[0];
	for (i = 1; i < n; i++)
	{
		if (max < h[i])
		{
			max = h[i];
		}
	}
	for (i = 0; i < n; i++)
	{
		if (max == h[i])
		{
			cout << "Max height of triangle: " << i+1 << "  is: " << max << "\n";
		}
	}
}
int main()
{
	input();
	calc();
	maximum();
	_getch();
	return 0;
}
