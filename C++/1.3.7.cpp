// ConsoleApplication5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	a = 4;
	b = 1;
	c = 7;
	if (a == b || a == c || b == c)
	{
		std::cout << "Треугольник равнобедренный" << std::endl;
	}
	else
	{
		std::cout << "Треугольник неравнобедренный" << std::endl;
	}
	
	system("pause");
	return 0;
}

