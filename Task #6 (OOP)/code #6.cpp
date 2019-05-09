#include "pch.h"
#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;
class profiles
{
private:
	int i;
public:
	void firstpart()
	{
		int const a = 4;
		int hphone[a]{ 23233,34564,23532,34215 };
		int mphone[a]{ 892640309,892548125,891525478,890325847 };
		int date[a]{ 1985,1995,1974,1991 };
		string fname[a]{ "Дмитрий","Никита","Василий","Константин" };
		string sname[a]{ "Конев","Иванов","Поляков","Лавров" };
		string lname[a]{ "Сергеевич","Дмитриевич","Всеволодович","Николаевич" };
		string position[a]{ "Стажер","Администратор","Руководитель","Менеджер" };
		cout << "Исходная таблица:" << endl;
		cout << "|--------------------------------------------------------------------------------------------------------|" << endl;
		cout << "|  Фамилия  |    Имя    |  Отчество  | Год рождения |  Должность  | Домашний телефон | Мобильный телефон |" << endl;
		cout << "|           |           |            |              |             |                  |                   |" << endl;
		cout << "|--------------------------------------------------------------------------------------------------------|" << endl;
		for (i = 0; i < 4; i++)
		{
			cout << "|" << setw(11) << setprecision(5) << sname[i];
			cout << "|" << setw(11) << setprecision(5) << fname[i];
			cout << "|" << setw(12) << setprecision(5) << lname[i];
			cout << "|" << setw(14) << setprecision(5) << date[i];
			cout << "|" << setw(13) << setprecision(5) << position[i];
			cout << "|" << setw(18) << setprecision(5) << hphone[i];
			cout << "|" << setw(19) << setprecision(5) << mphone[i] << "| \n";
		}

		string bufsname, buffname, buflname, bufposition;
		int i, j, bufmphone, bufhphone, bufdate;
		for (i = 0; i < 4; i++)
			for (j = i + 1; j < 4; j++)
			{
				if ((sname[j])[0] < (sname[i])[0])
				{
					bufsname = sname[j];
					sname[j] = sname[i];
					sname[i] = bufsname;

					buffname = fname[j];
					fname[j] = fname[i];
					fname[i] = buffname;

					bufdate = date[j];
					date[j] = date[i];
					date[i] = bufdate;

					bufposition = position[j];
					position[j] = position[i];
					position[i] = bufposition;

					buflname = lname[j];
					lname[j] = lname[i];
					lname[i] = buflname;

					bufmphone = mphone[j];
					mphone[j] = mphone[i];
					mphone[i] = bufmphone;

					bufhphone = hphone[j];
					hphone[j] = hphone[i];
					hphone[i] = bufhphone;
				}
			}
		cout << endl;
		cout << "Отсортированная таблица по фамилии в алфавитном порядке: " << endl;
		cout << "|--------------------------------------------------------------------------------------------------------|" << endl;
		cout << "|  Фамилия  |    Имя    |  Отчество  | Год рождения |  Должность  | Домашний телефон | Мобильный телефон |" << endl;
		cout << "|           |           |            |              |             |                  |                   |" << endl;
		cout << "|--------------------------------------------------------------------------------------------------------|" << endl;
		for (i = 0; i < 4; i++)
		{
			cout << "|" << setw(11) << setprecision(5) << sname[i];
			cout << "|" << setw(11) << setprecision(5) << fname[i];
			cout << "|" << setw(12) << setprecision(5) << lname[i];
			cout << "|" << setw(14) << setprecision(5) << date[i];
			cout << "|" << setw(13) << setprecision(5) << position[i];
			cout << "|" << setw(18) << setprecision(5) << hphone[i];
			cout << "|" << setw(19) << setprecision(5) << mphone[i] << "| \n";
		}

	}
	void secondpart()
	{
		int const a = 4;
		string fname[a]{ "Дмитрий","Никита","Василий","Константин" };
		string sname[a]{ "Конев","Иванов","Поляков","Лавров" };
		string lname[a]{ "Сергеевич","Дмитриевич","Всеволодович","Николаевич" };
		string position[a]{ "Стажер","Администратор","Руководитель","Менеджер" };
		int date[a]{ 1990,1987,1986,1981 };
		cout << "Исходная таблица:" << endl;
		cout << "|-----------------------------------------------------------------|" << endl;
		cout << "|  Фамилия  |    Имя    |  Отчество  | Год рождения |  Должность  |" << endl;
		cout << "|           |           |            |              |             |" << endl;
		cout << "|-----------------------------------------------------------------|" << endl;
		for (i = 0; i < 4; i++)
		{
			cout << "|" << setw(11) << setprecision(5) << sname[i];
			cout << "|" << setw(11) << setprecision(5) << fname[i];
			cout << "|" << setw(12) << setprecision(5) << lname[i];
			cout << "|" << setw(14) << setprecision(5) << date[i];
			cout << "|" << setw(13) << setprecision(5) << position[i] << "| \n";
		}

		cout << "\n";
		cout << "Вывод работников в возрасте от 30 до 35 лет:" << endl;
		cout << "|-----------------------------------------------------------------|" << endl;
		cout << "|  Фамилия  |    Имя    |  Отчество  | Год рождения |  Должность  |" << endl;
		cout << "|           |           |            |              |             |" << endl;
		cout << "|-----------------------------------------------------------------|" << endl;
		int d;
		for (i = 0; i < 4; i++)
		{
			d = 2019 - date[i];
			if (30 <= d)
			{
				if (d <= 35)
				{
					cout << "|" << setw(11) << setprecision(5) << sname[i];
					cout << "|" << setw(11) << setprecision(5) << fname[i];
					cout << "|" << setw(12) << setprecision(5) << lname[i];
					cout << "|" << setw(14) << setprecision(5) << date[i];
					cout << "|" << setw(13) << setprecision(5) << position[i] << "| \n";
				}
			}

		}
	}
	void file()
	{
		int const a = 4;
		int date[a]{ 1985,1995,1974,1991 };
		string path = "test.txt";
		ofstream out;
		out.open(path, ofstream::app);
		if (!out.is_open())
		{
			cout << "Ошибка записи файла \n";
		}
		else
		{
			cout << "Файл успешно записан \n";
			out.write((char*)&date, sizeof(date));
		}
		out.close();

		for (i = 0; i < 4; i++)
		{
			date[i] = 0;
		}

		ifstream in;
		in.open(path);
		if (!in.is_open())
		{
			cout << "Ошибка открытия файла \n";
		}
		else
		{
		 
			cout << "Файл успешно открыт: \n";
			while (in.read((char*)&date, sizeof(date)));
			{
				for (i = 0; i < 4; i++)
				{
					cout << date[i] << " ";
				}
			}
			cout << "\n";
		}
		in.close();

	}
	void menu()
	{
		cout << endl;
		cout << "Меню:" << "\n" << "1 - Вывод анкеты сотрудников" << "\n" << "2 - Вывод сотрудников в возрасте от 30 - 35 лет" << "\n" << "3 - Сохранение даты рождения в файл" << "\n" << "4 - Выход из программы" << endl;
		profiles a;
		int str;
		cout << "Выберите номер команды: ";
		cin >> str;
		switch (str)
		{
		case 1:
		{
			system("CLS");
			a.firstpart();
			a.menu();
			break;
		}
		case 2:
		{
			system("CLS");
			a.secondpart();
			a.menu();
			break;
		}
		case 3:
		{

			system("CLS");
			a.file();
			a.menu();
			break;
		}
		case 4:
		{
			break;
		}
		}

	};
};
int main()
{
	setlocale(LC_ALL, "ru");
	profiles a;
	a.menu();
}
