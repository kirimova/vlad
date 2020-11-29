// 3.9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
    int c;
    cout << "Напишите число :";
    cin >> c;
	switch (c)
	{
	case 1: cout << "Февраль";
		break;
	case 2: cout << "Март";
		break;
	case 3: cout << "Апрель";
		break;
	case 4:  cout << "Май";
		break;
	case 5: cout << "Июнь";
		break;
	case 6: cout << "Июль";
		break;
	case 7: cout << "Август";
		break;
	case 8: cout << "Сентябрь";
		break;
	case 9: cout << "Октябрь";
		break;
	case 10:cout << "Ноябрь";
		break;
	case 11: cout << "Декабрь";
		break;
	case 12: cout << "Январь";
		break;
	default: cout << "Такого числа нет";
	}
	cout << "\n";
	system("pause");
	return 0;
}

