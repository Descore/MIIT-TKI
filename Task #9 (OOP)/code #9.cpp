#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

class student
{
public:
	static int const a = 4;
	std::string fname[a]{ "Dmitriy","Alexey","Ivan","Egor" };
	std::string sname[a]{ "Volkov","Nosov","Kovalenko","Bolshakov" };
	std::string patronymic[a]{ "Aleksandrovich","Nikolaevich","Vladimirovich","Semenovich" };
	std::string group[a]{ "TST-111","SMT-311","TYY-212","TKI-311" };
	std::string hostel[a]{ "True","False","False","True" };
	int year[a]{ 1995,1992,2000,1998 };
	void get()
	{
		std::cout << "|___________________________________________________________________________| \n";
		std::cout << "|  Фамилия  |   Имя   |    Отчество    | День рождения | Группа | Общежитие | \n";
		std::cout << "|___________________________________________________________________________| \n";
		for (int i = 0; i < 4; i++)
		{
			std::cout << "|" << std::setw(12) << sname[i];
			std::cout << "|" << std::setw(8) << fname[i];
			std::cout << "|" << std::setw(16) << patronymic[i];
			std::cout << "|" << std::setw(15) << year[i];
			std::cout << "|" << std::setw(8) << group[i];
			std::cout << "|" << std::setw(11) << hostel[i] << "| \n";
		}
		std::cout << "|___________________________________________________________________________| \n";
	}
	void sort()
	{
		for (int i = 0; i < 4; i++)
			for (int j = i + 1; j < 4; j++)
			{
				if ((sname[j])[0] < (sname[i])[0])
				{
					std::swap(sname[j], sname[i]);
					std::swap(fname[j], fname[i]);
					std::swap(patronymic[j], patronymic[i]);
					std::swap(year[j], year[i]);
					std::swap(group[j], group[i]);
				}
			}
		std::cout << "|___________________________________________________________________________| \n";
		std::cout << "|  Фамилия  |   Имя   |    Отчество    | День рождения | Группа | Общежитие | \n";
		std::cout << "|___________________________________________________________________________| \n";
		for (int i = 0; i < 4; i++)
		{
			std::cout << "|" << std::setw(12) << sname[i];
			std::cout << "|" << std::setw(8) << fname[i];
			std::cout << "|" << std::setw(16) << patronymic[i];
			std::cout << "|" << std::setw(15) << year[i];
			std::cout << "|" << std::setw(8) << group[i];
			std::cout << "|" << std::setw(11) << hostel[i] << "| \n";
		}
		std::cout << "|___________________________________________________________________________| \n";
	}
	void house()
	{
		std::string a = "True";
		std::cout << "|_______________________________________________| \n";
		std::cout << "|  Фамилия  |   Имя   |    Отчество    | Группа | \n";
		std::cout << "|_______________________________________________| \n";
		for (int i = 0; i < 4; i++)
		{
			if (a == hostel[i])
			{
				std::cout << "|" << std::setw(12) << sname[i];
				std::cout << "|" << std::setw(8) << fname[i];
				std::cout << "|" << std::setw(16) << patronymic[i];
				std::cout << "|" << std::setw(8) << group[i] << "| \n";
			}
		}
		std::cout << "|_______________________________________________| \n";
	}
	void file()
	{
		std::string path = "birthday.txt";
		std::ofstream out;
		out.open(path, std::ofstream::app);
		if (!out.is_open())
		{
			std::cout << "Error \n";
		}
		else
		{
			std::cout << "Well done! \n";
			out.write((char*)& year, sizeof(year));
		}
		out.close();

		std::ifstream in;
		in.open(path);
		if (!in.is_open())
		{
			std::cout << "Error open \n";
		}
		else
		{

			std::cout << "File opened: \n";
			while (in.read((char*)& year, sizeof(year)));
			{
				for (int i = 0; i < 4; i++)
				{
					std::cout << year[i] << " ";
				}
			}
			std::cout << "\n";
		}
		in.close();

	}
	void menu()
	{
		std::cout << "\n";
		std::cout << "Меню:" << "\n" << "1) Table" << "\n" << "2) Sort" << "\n" << "3) Students in hostel" << "\n" << "4) Save array in file" << "\n" << "5) Exit \n";
		student s;
		int str;
		std::cout << "Number command: ";
		std::cin >> str;
		switch (str)
		{
		case 1:
		{
			system("CLS");
			s.get();
			s.menu();
			break;
		}
		case 2:
		{
			system("CLS");
			s.sort();
			s.menu();
			break;
		}
		case 3:
		{
			system("CLS");
			s.house();
			s.menu();
			break;
		}
		case 4:
		{
			system("CLS");
			s.file();
			s.menu();
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
	student s;
	s.menu();
}
