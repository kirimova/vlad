// ConsoleApplication2.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include "stdafx.h"
#include <iostream>
int _tmain(int argc, _TCHAR* argv[])
{
	bool result;
	int num;
	std::cout << std::boolalpha;

	std::cout << "¬ведите число: ";
	std::cin >> num;

	if (num % 10 + num / 10 % 10 == num / 100 % 10 + num / 1000)
		result = true;
	else
		result = false;

	std::cout << result << std::endl;
	system("pause");

	return 0;

	
}

