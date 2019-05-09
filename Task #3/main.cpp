#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	char s[100] = "aaaabbbbccccddddeeeeffff";
	int i, m, n, b, k, l;
	k = 0;
	m = 6;
	n = 4;
	b = 2;
	cout << "Кол-во слов=" << m << "  Длина слова=" << n << "  Номер слова B= " << b << "\n";
	for (i = 1; i < b; i++)
	{
		k += n;
	} 
	cout << "Буква:" << s[k] << " Номер:" << k << "\n";
	for (i = k; i < 23; i++)
	{
		s[i] = s[i + 4];
	}
	cout << "Строка, после удаления " << b << " слова:";
	for (i = 0; i < 23; i++)
	{
		cout << s[i];
	}
	cout << "\n";
}
