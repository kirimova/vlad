// ConsoleApplication1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	int x, y;
	x = 2;
	y = 6;
	if ((y > 0) && (y < x + 4) && (y < -x + 4) && (y = 4))
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

