#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;
class point
{
public:
	static int x, y;
	static string color;
	point() {}
	point(int vx, int vy, string vc)
	{
		x = vx;
		y = vy;
		color = vc;
	}
	virtual void get()
	{
		cout << "Координаты точки: [" << x << ":" << y << "]" << endl;
		cout << "Цвет: " << color << endl;
		cout << "(вывод 1 класса)" << endl;
	}
	void set()
	{
		int a, b;
		string c;
		cout << "Введите координату Х: ";
		cin >> a;
		cout << "Введите координату Y: ";
		cin >> b;
		cout << "Введите желаемый цвет: ";
		cin >> c;
		cout << endl;
		x = a;
		y = b;
		color = c;
		cout << "Координаты точки: [" << x << ":" << y << "]" << endl;
		cout << "Цвет: " << color << endl;
	}
	~point() {}
};
int point::x;
int point::y;
string point::color;

class triangle :public point
{
public:
	int x1, y1, x2, y2;
	triangle(int vx, int vy, int vx1, int vy1, int vx2, int vy2, string vc ) :point(vx, vy, vc)
	{
		x = vx;
		y = vy;
		color = vc;
		x1 = vx1;
		y1 = vy1;
		x2 = vx2;
		y2 = vy2;

	}
	void get()
	{
		cout << "Координаты точки: [" << x << ":" << y << "]" << endl;
		cout << "Цвет: " << color << endl;
		cout << "(вывод 2 класса)" << endl;
	}
	void change()
	{
		int a, b, c, d, e, f;
		string color1;
		cout << "Введите координату Х: ";
		cin >> a;
		cout << "Введите координату Y: ";
		cin >> b;
		cout << "Введите координату Х1: ";
		cin >> c;
		cout << "Введите координату Y1: ";
		cin >> d;
		cout << "Введите координату Х2: ";
		cin >> e;
		cout << "Введите координату Y2: ";
		cin >> f;
		cout << "Введите желаемый цвет: ";
		cin >> color1;
		cout << endl;
		x = a;
		y = b;
		x1 = c;
		y1 = d;
		x2 = e;
		y2 = f;
		color = color1;
		cout << "Координаты точек: [" << x << ":" << y << "] " << " [" << x1 << ":" << y1 << "]" << " [" << x2 << ":" << y2 << "]" << endl;
		cout << "Цвет: " << color << endl;
	}
	void type()
	{
		int l1, l2, l3;
		l1 = sqrt(double((x1 - x) * (x1 - x) + (y1 - y) * (y1 - y)));
		l2 = sqrt(double((x2 - x) * (x2 - x) + (y2 - y) * (y2 - y)));
		l3 = sqrt(double((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));

		if (l1 < l2 + l3 && l2 < l1 + l3 && l3 < l1 + l2)
		{
			if (l1 == l2 && l2 == l3) cout << "Равносторонний" << endl;
			else if (l1 == l2 || l1 == l3 || l2 == l3) cout << "Равнобедренный" << endl;
			else cout << "Разносторонний" << endl;
		}
		else
			cout << "Не треугольник" << endl;
	}
	~triangle() {}
};
int main()
{
	int m = 0;
	setlocale(LC_ALL, "RU");
	point b(4, 10,"White"), * refb;
	triangle a(4,10,10,15,17,10,"White"), * refa;
	do
	{
		int str;
		cout << endl;
		cout << "Меню: \n" << "1 - Исходные значения \n" << "2 - Изменить исходные значения \n" << "3 - Вывести ко-ты треугольника и цвет точки \n" << "4 - Изменить ко-ты треугольника и цвет точек \n" << "5 - Определить тип треугольника \n" << "6 - Проверка Virtual \n" << "7 - Выйти \n";
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
			a.change();
			break;
		}
		case 5:
		{
			a.type();
			break;
		}
		case 6:
		{
			point* gett = &a;
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
