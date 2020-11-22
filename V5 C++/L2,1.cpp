// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, c;
		cout << "Напсиать число a:";
		cin >> a;
		cout << "Написать число b:";
		cin >> b;
		cout << "Написать число c:";
		cin >> c;
		if (a >= 0)
		{   
			cout << "(a^3)="<<a*a*a;
		}
		else
		{
			cout << "(a^4)=" << a*a*a*a;
		}
		if (b>=0)
		{
			cout << "(b^3)=" << b*b*b;
		}
		else
		{
			cout << "(b^4)=" << b * b * b * b;
		}
			if (c >= 0)
			{
				cout << "(c^3)=" << c*c*c;
			}
			else
			{
				cout << "(c^4)=" << c*c*c*c;
			}
			cin.get();
			
		system("pause");

	return 0;
}

