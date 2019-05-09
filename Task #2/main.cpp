#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int i, j, k, a[3][3], b[3][3], c[3][3];
	cout << " Ввод данных матрицы А: \n";
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << "a[" << i << "][" << j << "]=";
			cin >> a[i][j];
		}
	}
	cout << "\n";
	cout << " Матрица А: \n";
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << a[i][j] << ' ';
		}
		cout << '\n';
	}
	cout << "\n";
	cout << " Ввод данных матрицы В: \n";
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << "a[" << i << "][" << j << "]=";
			cin >> b[i][j];
		}
	}
	cout << "\n";
	cout << " Матрица В: \n";
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << b[i][j] << ' ';
		}
		cout << "\n";
	}
	cout << "\n";
	cout << " Матрицы A*B= \n";
	for (i = 0; i < 3; i++) 
	{
		for (j = 0; j < 3; j++) 
		{
			c[i][j] = 0;
			for (k = 0; k < 3; k++)
				c[i][j] += a[i][k] * b[k][j];
				cout << c[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "\n";
	cout << " Матрицы B*A= \n";
	for (i = 0; i < 3; i++) 
	{
		for (j = 0; j < 3; j++) 
		{
			c[i][j] = 0;
			for (k = 0; k < 3; k++)
				c[i][j] += b[i][k] * a[k][j];
				cout << c[i][j] << " ";
		}
		cout << "\n";
	}
}
