// ConsoleApplication3.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	int x, y;
	x = 3;
	y = 1;
	if ((y <= 6) && (y >= 2) && (x*x + y*y >= 16) && (x*x + y*y <= 36))
	{
		std::cout << "Point(" << x << "," << y << ") - ������ � ���� " << std::endl;
	}
	else
	{
		std::cout << "Point(" << x << "," << y << ") - �� ������ � ����" << std::endl;
	}
	system("pause");

	return 0;
}

