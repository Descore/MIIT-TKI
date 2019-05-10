#include <iostream>
#include <conio.h>
#include <iomanip>

class payment
{
private:
	int year;
public:
	std::string fio = "Gatin Robert Ramilevich";
	int oklad = 41200;
	int yearwork = 2010;
	int premiya = 30;
	int nalog = 5356;
	int sum;
	int vichet=9476;
	payment() {}
	payment(int valuex1)
	{
		year = valuex1;
	}
	void summa()
	{
		int s;
		s = oklad + (oklad * premiya) / 100 - vichet;
		std::cout << s << std::endl;
	}
	void minus()
	{
		int m;
		m = (oklad * 0.1) + (oklad * 0.13);
		std::cout << m << std::endl;
	}
	void work()
	{
		int w;
		w = year - yearwork;
		std::cout << w << " year" << std::endl;
	}
	void payday()
	{
		sum = oklad + (oklad * premiya) / 100 - vichet;
		std::cout << sum << std::endl;
	}

};
	int main()
	{
		payment();
		payment c(2019);
		int m = 0;
		do
		{
			int str;
			std::cout << std::endl;
			std::cout << "Menu \n" << "1 - Summa \n" << "2 - Vichet \n" << "3 - Work year \n" << "4 - Cash \n" << "5 - Exit \n";
			std::cout << "Choose number: ";
			std::cin >> str;
			std::cout << std::endl;
			switch (str)
			{
			case 1:
			{
				c.summa();
				break;
			}
			case 2:
			{
				c.minus();
				break;
			}
			case 3:
			{
				c.work();
				break;
			}
			case 4:
			{
				c.payday();
				break;
			}
			case 5:
			{
				return 0;
			}
			}
		} while (m != 1);
	}


