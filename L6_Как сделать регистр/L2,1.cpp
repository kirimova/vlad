// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	double a(0), b(0), c(0);
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
			cout << "(b^4)=" << b*b*b*b;
			if (c >= 0)
			{
				cout << "(c^3)=" << c*c*c;
			}
			else
			{
				cout << "(c^4)=" << c*c*c*c;
			}
		}		
		system("pause");

	return 0;
}

