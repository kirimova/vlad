// ConsoleApplication2.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include "stdafx.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	int x, y;
	x = 5;
	y = 3;
	if ((x >= -2) &&(x <= 2) &&(y <= 4) && (y >= -3))
	{
		std::cout << "Point(" << x << "," << y << ") - ¬ходит в зону " << std::endl;
	}
	else
	{
		std::cout << "Point(" << x << "," << y << ") - не входит в зону" << std::endl;
	}
	system("pause");





	return 0;
}

