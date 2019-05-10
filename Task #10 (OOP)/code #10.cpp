#include <iomanip>
#include <stdio.h>
#include <iostream>

class stroka
{
public:
	std::string str = {"Строка"}, des_s, c;
	char strs = str[0];
	char* first_symbol = &strs;
	int dlina = str.length();
	stroka() {}
	stroka(std::string value)
	{
		c = value;
	}
	virtual void get()
	{
		std::cout << "Первый символ в строке: " << first_symbol << "   Длина строки: " << dlina << "\n";
	}
	void clear()
	{
		str = c;
		std::cout << "Строка успешно очищена \n";
	}
	~stroka() {};
};
class des_stroka:public stroka
{
public:
	des_stroka() {}
	des_stroka(std::string value)
	{
		des_s = value;
	}
	void condition()
	{
		for (int i = 0; i < des_s.length(); i++)
		{
			if (des_s[i]<'0' && des_s[i]>'9')
				if (des_s[i] != '+' && des_s[i] != '-')
				{
					des_s = '0';
				}
		}
	}
	void get()
	{
		std::cout << "Десятичное число: " << des_s << "\n";
	}
	void sign()
	{
		for (int i = 0; i < des_s.length(); i++)
		{
			if (des_s[i] == '+')
			{
				des_s[i] = '-';
			}
			else if(des_s[i] == '-')
			{
				des_s[i] = '+';
			}
		}
		std::cout << des_s << "\n";
	}
	void integer()
	{
		int s;
		s = atoi(des_s.c_str());
		std::cout << "Число в формате int: " << s << "\n";
	}
	~des_stroka() {};
};

int main()
{
	setlocale(LC_ALL, "ru");
	stroka a(" "), *sa; 
	des_stroka b("+125"), *db;
	b.condition();
	int m = 0;
	do
	{
		int s;
		std::cout << "\n";
		std::cout << "Меню: \n" << "1 - Вывод значений полей \n" << "2 - Очистить строку \n" << "3 - Вывести десятичное число \n" << "4 - Изменить знаки на противоположные \n" << "5 - Представление числа в int \n" << "6 - Проверка Virtual \n" << "7 - Выйти \n";
		std::cout << "Выберите номер команды: ";
		std::cin >> s;
		std::cout << "\n";
		switch (s)
		{
		case 1:
		{
			sa = &a;
			sa->get();
			break;
		}
		case 2:
		{
			a.clear();
			break;
		}
		case 3:
		{
			db = &b;
			db->get();
			break;
		}
		case 4:
		{
			b.sign();
			break;
		}
		case 5:
		{
			b.integer();
			break;
		}
		case 6:
		{
			stroka* gett = &b;
			gett->get();
			break;
		}
		case 7:
		{
			return 0;
		}
		}
	} while (m != 1);

}
