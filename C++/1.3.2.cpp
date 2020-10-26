// ConsoleApplication3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream>
int _tmain(int argc, _TCHAR* argv[])
{
	int a,s,c,d,symma,e;
	a = 322;
	 s= a / 100;
	a = a % 2;
	d = a / 10;
	a = a % 10;
		e = a;
	symma=a+d+e;
	std::cout << symma <<std:: endl;
	system("pause");
    return 0;
}

