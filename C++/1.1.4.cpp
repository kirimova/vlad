// ConsoleApplication2.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{ 
	double x, y, d;
	x = 6;
	y = 2;
	d = (x + y / y + 1) - (x*y - 12 / 34 + x);
	std::cout <<"d="<< d;
	std::cin >> d ;
	return 0;
}

