#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;
class magazin
{
private:
	int i;
	static int const a = 4;
public:
	int phone[a]{ +74955343,+74956384,+749539493,+749530274 };
	string name[a]{ "Пятерочка","Северный","Ашан","Роса" };
	string type[a]{ "Супермаркет","Универмаг","Гипермаркет","Минимаркет" };
	string adress[a]{ "ул.Ленина д.3","ул.Космонавтов д.43а","улица Жукова д.10","ул.Советская 5а" };
	string site[a]{ "5ka.ru","north.ru","auchan.ru","rosa.ru" };
	void table()
	{
		cout << "Исходная таблица:" << endl;
		cout << "|------------------------------------------------------------------------------------| \n";
		cout << "| Название магазина | Тип магазина |        Адрес        | Номер телефона |   Сайт   | \n";
		cout << "|------------------------------------------------------------------------------------| \n";
		for (i = 0; i < 4; i++)
		{
			cout << "|" << setw(19) << setprecision(5) << name[i];
			cout << "|" << setw(14) << setprecision(5) << type[i];
			cout << "|" << setw(21) << setprecision(5) << adress[i];
			cout << "|" << setw(16) << setprecision(5) << phone[i];
			cout << "|" << setw(10) << setprecision(5) << site[i] << "| \n";
		}
	}
	void sort()
	{
		for (int i = 0; i < 4; i++)
			for (int j = i + 1; j < 4; j++)
			{
				if ((name[j])[0] < (name[i])[0])
				{
					swap(name[j], name[i]);
					swap(type[j], type[i]);
					swap(adress[j], adress[i]);
					swap(phone[j], phone[i]);
					swap(site[j], site[i]);
				}
			}
		cout << endl;
		cout << "Отсортированная таблица в алфавитном порядке: " << endl;
		cout << "|------------------------------------------------------------------------------------| \n";
		cout << "| Название магазина | Тип магазина |        Адрес        | Номер телефона |   Сайт   | \n";
		cout << "|------------------------------------------------------------------------------------| \n";
		for (i = 0; i < 4; i++)
		{
			cout << "|" << setw(19) << setprecision(5) << name[i];
			cout << "|" << setw(14) << setprecision(5) << type[i];
			cout << "|" << setw(21) << setprecision(5) << adress[i];
			cout << "|" << setw(16) << setprecision(5) << phone[i];
			cout << "|" << setw(10) << setprecision(5) << site[i] << "| \n";
		}
	}
	void choose()
	{
		cout << endl;
		int c;
		cout << "1) Супермаркет \n" << "2) Универмаг \n" << "3) Гипермаркет \n" << "4) Минимаркет" << "\n";
		cout << "Выберите тип магазина: ";
		cin >> c;
		cout << endl;
		cout << "|---------------------------------------------------------------------| \n";
		cout << "| Название магазина |        Адрес        | Номер телефона |   Сайт   | \n";
		cout << "|---------------------------------------------------------------------| \n";
		cout << "|" << setw(19) << setprecision(5) << name[c - 1];
		cout << "|" << setw(21) << setprecision(5) << adress[c - 1];
		cout << "|" << setw(16) << setprecision(5) << phone[c - 1];
		cout << "|" << setw(10) << setprecision(5) << site[c - 1] << "| \n";
	}
	void file()
	{
		string path = "types.txt";
		ofstream out;
		out.open(path, ofstream::app);
		if (!out.is_open())
		{
			cout << "Ошибка записи файла \n";
		}
		else
		{
			cout << "Файл успешно записан \n";
			out.write((char*)& type, sizeof(type));
		}
		out.close();

		ifstream in;
		in.open(path);
		if (!in.is_open())
		{
			cout << "Ошибка открытия файла \n";
		}
		else
		{

			cout << "Файл успешно открыт: \n";
			while (in.read((char*)& type, sizeof(type)));
			{
				for (i = 0; i < 4; i++)
				{
					cout << type[i] << " ";
				}
			}
			cout << "\n";
		}
		in.close();

	}
	void menu()
	{
		cout << endl;
		cout << "Меню:" << "\n" << "1) Список магазинов" << "\n" << "2) Сортирова по алфавиту" << "\n" << "3) Магазины конкретного типа" << "\n" << "4) Сохранение массива в файл" << "\n" << "5) Выход из программы" << endl;
		magazin a;
		int str;
		cout << "Выберите номер команды: ";
		cin >> str;
		switch (str)
		{
		case 1:
		{
			system("CLS");
			a.table();
			a.menu();
			break;
		}
		case 2:
		{
			system("CLS");
			a.sort();
			a.menu();
			break;
		}
		case 3:
		{
			system("CLS");
			a.choose();
			a.menu();
			break;
		}
		case 4:
		{
			system("CLS");
			a.file();
			a.menu();
			break;
		}
		case 5:
		{
			break;
		}
		}

	};
};
int main()
{
	setlocale(LC_ALL, "ru");
	magazin a;
	a.menu();
}
