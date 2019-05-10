#include <iostream>
#include <conio.h>
#include <string>

using namespace std;
class stroka
{
public:
	static const int x = 30;
	string str = { "Hello world, it's me!" };
	char strp = str[0];
	char* symbol = &strp;
	int s = 0, dlina = str.length();
	stroka() {}
	stroka(int value)
	{
		s = value;
	}
	void get()
	{
		cout << "Вывод строки: " << str << endl;
	}
	void size()
	{
		cout << "Длина строки: " << dlina << " символ(ов)" << endl;
	}
	void first()
	{
		cout << "Первый найденный символ в строке: " << *symbol << endl;
	}
	void count()
	{
		int count = 0, i;
		{
			for (i = 0; i < dlina; i++)
			{
				if (str[i] == ' ')
				{
					count++;
				}
			}
		}
		cout << "Количество слов в строке: " << count + 1 << endl;
	}
	void count2()
	{
		int in;
		cout << "Введите с какого символа начать подсчёт слов в строке: ";
		cin >> in;
		cout << endl;
		string s1;
		s1 = s1.assign(str, in, x);
		int count = 0, i;
		{
			for (i = 0; i < s1.length(); i++)
			{
				if (s1[i] == ' ')
				{
					count++;
				}
			}
		}
		cout << "Количество слов в строке: " << count + 1 << endl;
	}
};
int main()
{
	int m = 0;
	setlocale(LC_ALL, "RU");
	stroka a(10);
	do
	{
		int str;
		cout << endl;
		cout << "Меню: \n" << "1 - Вывод исходной строки \n" << "2 - Вывод длины строки \n" << "3 - Поиск первого символа в строке \n" << "4 - Количество слов в строке \n" << "5 - Подсчет кол-ва слов начиная с символа Х \n" << "6 - Выйти \n";
		cout << "Выберите номер команды: ";
		cin >> str;
		cout << endl;
		switch (str)
		{
		case 1:
		{
			a.get();
			break;
		}
		case 2:
		{
			a.size();
			break;
		}
		case 3:
		{
			a.first();
			break;
		}
		case 4:
		{
			a.count();
			break;
		}
		case 5:
		{
			a.count2();
			break;
		}
		case 6:
		{
			return 0;
		}
		}
	} while (m != 1);
}
