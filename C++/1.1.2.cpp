// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream>

double Qwe2(double a = 6, double b = 3, double c = 1, double d = 8)
{
	return (a / b)*(b / d) - (a*b - c / c*d);
}
int _tmain(int argc, _TCHAR* argv[])
{
	double  a,b,c,d,y;
	a = 6;
	b = 3;
	c = 1;
	d = 8;
	
	y = (a / b)*(b / d) - (a*b - c / c*d);
	std::cout << "y="<<y;
	std::cout << "y=" << Qwe2();
	std::cin >> a;
	return 0;
}

