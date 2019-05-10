#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;
class computer
{
private:
	int i;
public:
	static int const a = 3;
	string name[a]{ "Intel","AMD","IBM" };
	int frequency[a]{ 3900,3500,3200 };
	int bit[a]{ 64,86,32 };
	int memory[a]{ 15,30,10 };
	int hdd[a]{ 1000,500,2000 };
	int floppy[a]{ 50,100,150 };
	void table()
	{
		cout << "|-----------------------------------------------------------------------------------------------------------------|" << endl;
		cout << "| Название микропроцессора | Тактовая частота | Разрядность | Объем памяти | Объем жесткого диска | Объем дискеты |" << endl;
		cout << "|                          |                  |             |              |                      |               |" << endl;
		cout << "|-----------------------------------------------------------------------------------------------------------------|" << endl;
		for (i = 0; i < 3; i++)
		{
			cout << "|" << setw(26) << setprecision(5) << name[i];
			cout << "|" << setw(18) << setprecision(5) << frequency[i];
			cout << "|" << setw(13) << setprecision(5) << bit[i];
			cout << "|" << setw(14) << setprecision(5) << memory[i];
			cout << "|" << setw(22) << setprecision(5) << hdd[i];
			cout << "|" << setw(15) << setprecision(5) << floppy[i] << "| \n";
		}
	}
	void sortirovka()
	{
			for (int i = 0; i < a-1; ++i)
			{
				for (int j = 0; j < a-1; ++j)
				{
					if (frequency[j + 1] < frequency[j])
					{
						swap(name[j + 1], name[j]);
						swap(frequency[j + 1], frequency[j]);
						swap(bit[j + 1], bit[j]);
						swap(memory[j + 1], memory[j]);
						swap(hdd[j + 1], hdd[j]);
						swap(floppy[j + 1], floppy[j]);
					}
				}
			}
		cout << endl;
		cout << "Отсортированная таблица по возрастанию тактовой частоты микропроцессоров : " << endl;
		cout << "|-----------------------------------------------------------------------------------------------------------------|" << endl;
		cout << "| Название микропроцессора | Тактовая частота | Разрядность | Объем памяти | Объем жесткого диска | Объем дискеты |" << endl;
		cout << "|                          |                  |             |              |                      |               |" << endl;
		cout << "|-----------------------------------------------------------------------------------------------------------------|" << endl;
		for (i = 0; i < 3; i++)
		{
			cout << "|" << setw(26) << setprecision(5) << name[i];
			cout << "|" << setw(18) << setprecision(5) << frequency[i];
			cout << "|" << setw(13) << setprecision(5) << bit[i];
			cout << "|" << setw(14) << setprecision(5) << memory[i];
			cout << "|" << setw(22) << setprecision(5) << hdd[i];
			cout << "|" << setw(15) << setprecision(5) << floppy[i] << "| \n";
		}

	}
	void pc()
	{
		int c;
		cout << "1) Компьютер с микропроцессором Intel \n" << "2) Компьютер с микропроцесоором AMD \n" << "3) Компьютер с микропроцессором IBM \n";
		cout << "Выберите номер компьютера: ";
		cin >> c;
		cout << endl;
		cout << "|--------------------------------------------------------------------------------------|" << endl;
		cout << "| Тактовая частота | Разрядность | Объем памяти | Объем жесткого диска | Объем дискеты |" << endl;
		cout << "|                  |             |              |                      |               |" << endl;
		cout << "|--------------------------------------------------------------------------------------|" << endl;
		cout << "|" << setw(18) << setprecision(5) << frequency[c - 1];
		cout << "|" << setw(13) << setprecision(5) << bit[c - 1];
		cout << "|" << setw(14) << setprecision(5) << memory[c - 1];
		cout << "|" << setw(22) << setprecision(5) << hdd[c - 1];
		cout << "|" << setw(15) << setprecision(5) << floppy[c - 1] << "| \n";

	}
	void file()
	{
		string path = "name.txt";
		ofstream out;
		out.open(path, ofstream::app);
		if (!out.is_open())
		{
			cout << "Ошибка записи файла \n";
		}
		else
		{
			cout << "Файл успешно записан \n";
			out.write((char*)& name, sizeof(name));
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
			while (in.read((char*)& name, sizeof(name)));
			{
				for (i = 0; i < 3; i++)
				{
					cout << name[i] << " ";
				}
			}
			cout << "\n";
		}
		in.close();

	}
};
int main()
{
	setlocale(LC_ALL, "ru");
	computer a;
	int m = 0;
	do
	{
		int str;
		cout << endl;
		cout << "Меню: \n" << "1 - Исходная таблица \n" << "2 - Сортировать по частоте \n" << "3 - Вывести хар-к компьютера \n" << "4 - Сохранение массива в файл \n" << "5 - Выход \n";
		cout << "Выберите номер команды: ";
		cin >> str;
		cout << endl;
		switch (str)
		{
		case 1:
		{
			a.table();
			break;
		}
		case 2:
		{
			a.sortirovka();
			break;
		}
		case 3:
		{
			a.pc();
			break;
		}
		case 4:
		{
			a.file();
			break;
		}
		case 5:
		{
			return 0;
		}
		}
	} while (m != 1);
}
