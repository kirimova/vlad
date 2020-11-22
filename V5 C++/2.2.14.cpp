// 2.2.14.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int x = 0, y;
	if (x <= 13)
		y = pow(-x, 3) + 9;
	else
		if (x > 13)
			y = -3 / x + 1;
	cout << "Найдем значение y=" << y<<endl;
	system("pause");
	return 0;
}
