// 2.7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	long a, b, c;
	int H = 0;
	cout << "Написать число a:";
	cin >> a;
	cout << "Написать число b:";
	cin >> b;
	cout << "Написать число c:";
	cin >> c;
	if (a < 0)++H;
	if (b < 0)++H;
	if (c < 0)++H;
	cout << "Количество отрицательных чисел :" << H << endl;
	system("pause");
	return 0;
}


