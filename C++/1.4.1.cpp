// ConsoleApplication1.cpp: определ€ет точку входа дл€ консольного приложени€.
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
		std::cout << "Point(" << x << "," << y << ") - ¬ходит в зону " << std::endl;
	}
	else
	{
		std::cout << "Point(" << x << "," << y << ") - не входит в зону" << std::endl;
	}
	system("pause");




	return 0;
}

