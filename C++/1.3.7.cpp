// ConsoleApplication5.cpp: ���������� ����� ����� ��� ����������� ����������.
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
		std::cout << "����������� ��������������" << std::endl;
	}
	else
	{
		std::cout << "����������� ����������������" << std::endl;
	}
	
	system("pause");
	return 0;
}

