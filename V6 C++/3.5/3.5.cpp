// 3.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h >
#include <stdlib.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
    int a;
    cout << "Напишите любую цифру :";
    cin >> a;
	switch (a)
	{
	case 1: cout << ("Месяц январь ");
		break;
	case 2:cout << ("Месяц февраль");
		break;
	case 3: cout << ("Месяц март ");
		break;
	case 4: cout << ("Месяц апрель");
		break;
	case 5: cout << ("Месяц май");
		break;
	case 6: cout << ("Месяц июнь");
		break;
	case 7: cout << ("Месяц июль");
		break;
	case 8: cout << ("Месяц август");
		break;
	case 9: cout << ("Месяц сентябрь");
		break;
	case 10: cout << ("Месяц октябрь");
		break;
	case 11: cout << ("Месяц ноябрь");
		break;
	case 12: cout << ("Месяц декабрь");
		break;
	default: cout<<("неправильно введенное число");
		cout << "\n\t";
		system("pause");
		return 0;
	}
}
