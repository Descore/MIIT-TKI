#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	const int i = 10, j = 9;
	int d, f, porog = 20, e = 0, otvet_stroki[10];
	int a[i][j] = {
		8,1,4,7,2,6,8,1,4,
		7,2,5,4,3,5,7,2,5,
		4,3,5,1,0,3,1,0,3,
		5,1,8,1,4,7,9,2,3,
		4,3,5,7,2,5,1,7,2,
		3,7,2,5,4,3,6,9,2,
		1,4,7,2,6,9,5,1,0,
		1,0,3,7,2,5,4,1,8,
		5,8,1,4,7,2,4,3,5,
		8,1,4,7,2,6,9,2,3
	};
	int b[i][j] = {
		1,1,1,0,0,1,0,1,1,
		0,0,1,1,0,0,0,1,0,
		0,1,1,0,0,0,1,0,1,
		0,1,0,1,1,0,1,0,0,
		1,0,1,0,1,0,0,1,0,
		1,1,0,0,1,0,0,1,1,
		0,0,0,1,1,1,0,1,1,
		0,1,0,1,0,1,0,0,0,
		1,1,1,0,1,1,0,1,1,
		1,1,1,0,1,0,1,0,0
	};
	cout << "Исходная таблица весов: \n";
	for (d = 0; d < 10; d++)
	{
		cout << "[" << d << "] ";
		for (f = 0; f < 9; f++)
		{
			cout << a[d][f] << " ";
		}
		cout << endl;
	}
	cout << endl;

	for (d = 0; d < 10; d++)
	{
		for (f = 0; f < 9; f++)
		{
			if (b[0][f] == 1)
			{
				e += a[d][f];
			}
		}
		otvet_stroki[d]=e;
		cout << "[" << d << "]=";
		cout << otvet_stroki[d] << " ";
		e = 0;
	}
	cout << endl << endl << endl;
	cout << "Оптимизированная таблица весов: \n \n";


	if (otvet_stroki[0] < porog)
	{
		do
		{
			for (f = 0; f < 9; f++)
			{
				if (b[0][f] == 1)
				{
					a[0][f]+=a[0][f];
					e += a[0][f];
				}
			}
		}while (e < porog); 
	}

	cout << "[" << 0 << "]=";
	cout << otvet_stroki[0] << " ";
	for (int t=1; t < 10; t++)
	{
		if (otvet_stroki[t] > porog)
		{
			do
			{
					for (f = 0; f < 9; f++)
					{
						if (b[0][f] == 1)
						{
							a[t][f] = a[t][f]-1;
							e += a[t][f];
						}
					}
					otvet_stroki[t] = e;
					e = 0;
			} while (otvet_stroki[t] > porog);
		}
		cout << "[" << t << "]=";
		cout << otvet_stroki[t] << " ";
	}
	cout << endl << endl;


	for (d = 0; d < 10; d++)
	{
		cout << "[" << d << "] ";
		for (f = 0; f < 9; f++)
		{
			cout << a[d][f] << " ";
		}
		cout << endl;
	}
}
