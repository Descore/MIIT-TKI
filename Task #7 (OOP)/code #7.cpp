#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;
class para_chisel
{
protected:
	static int x1, x2;
public:
	para_chisel() {}
	para_chisel(int valuex1, int valuex2)
	{
		x1 = valuex1;
		x2 = valuex2;
	}
	virtual void get()
	{
		cout << "Число номер 1: " << x1 << "  Число номер 2: " << x2 << endl;

	}
	void set()
	{
		int z, v;
		cout << "Введите желаемое значения числа номер 1: ";
		cin >> z;
		cout << "Введите желаемое значения числа номер 2: ";
		cin >> v;
		cout << endl;
		x1 = z;
		x2 = v;
		cout << "Теперь число номер 1= " << x1 << "  Число номер 2= " << x2 << endl;
	}
	~para_chisel() {}
};
int para_chisel::x1;
int para_chisel::x2;
class rectangle :public para_chisel
{
public:
	rectangle(int valuex1, int valuex2) :para_chisel(valuex1, valuex2)
	{
		x1 = valuex1;
		x2 = valuex2;
	}
	void get()
	{
		cout << "Ширина= " << x1 << "  Длина= " << x2 << endl;
	}
	void square()
	{
		int s;
		s = x1 * x2;
		cout << "Площадь = " << s << endl;
	}
	void perimeter()
	{
		int p;
		p = x1 * 2 + x2 * 2;
		cout << "Периметр = " << p << endl;
	}
	~rectangle() {}
};
int main()
{
	int m = 0;
	setlocale(LC_ALL, "RU");
	para_chisel b(4, 10), *refb;
	rectangle a(4, 10), *refa;
	do
	{
		int str;
		cout << endl;
		cout << "Меню: \n" << "1 - Исходные значения \n" << "2 - Изменить исходные значения \n" << "3 - Вывести ширину и длину \n" << "4 - Посчитать площадь \n" << "5 - Посчитать периметр \n" << "6 - Проверка Virtual \n" << "7 - Выйти \n";
		cout << "Выберите номер команды: ";
		cin >> str;
		cout << endl;
		switch (str)
		{
		case 1:
		{
			refb = &b;
			refb->get();
			break;
		}
		case 2:
		{
			a.set();
			break;
		}
		case 3:
		{
			refa = &a;
			refa->get();
			break;
		}
		case 4:
		{
			a.square();
			break;
		}
		case 5:
		{
			a.perimeter();
			break;
		}
		case 6:
		{
			para_chisel *gett = &a;
			gett->get();
		}
		case 7:
		{
			return 0;
		}
		}
	} while (m != 1);
}
