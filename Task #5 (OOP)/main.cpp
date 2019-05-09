 #include <iostream>
#include <conio.h>

using namespace std;
class rectangle
{
private:
	int x1, x2, y1, y2;
public:
	rectangle(int valuex1, int valuey1, int valuex2, int valuey2)
	{
		x1 = valuex1;
		y1 = valuey1;
		x2 = valuex2;
		y2 = valuey2;
	}
	void output()
	{
		cout << "���������� ����� ��������������: " << "X1= " << x1 << "\t Y1= " << y1 << "\t X2= " << x2 << "\t Y2= " << y2 << endl;
	}
	void sides()
	{
		cout << " ������ = " << y1 - y2 << "  ����� = " << x2 - x1 << endl;
	}
	void square()
	{
		int s;
		s = (y1 - y2)*(x2 - x1);
		cout << "������� = " << s << endl;
	}
	void perimeter()
	{
		int p;
		p = (x2 - x1) * 2 + (y1 - y2) * 2;
		cout << "�������� = " << p << endl;
	}
	void menu()
	{
		int str;
		cout << endl;
		cout << "����: \n" << "1 - ��������� ������ � ����� \n" << "2 - ��������� ������� \n" << "3 - ��������� �������� \n" << "4 - ����� \n" ;
		cout << "�������� ����� �������: ";
		rectangle a(3, 6, 10, 0);
		cin >> str;
		cout << endl;
		switch (str)
		{
		case 1:
		{
			a.sides();
			a.menu();
			break;
		}
		case 2:
		{
			a.square();
			a.menu();
			break;
		}
		case 3:
		{
			a.perimeter();
			a.menu();
			break;
		}
		case 4:
		{
			break;

		}
		}
	}
};
int main()
{
	setlocale(LC_ALL, "ru");
	rectangle a(3, 6, 10, 0);
	a.output();
	a.menu();
}
