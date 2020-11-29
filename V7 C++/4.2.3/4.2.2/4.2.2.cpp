// 4.2.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;
int main()
{
	int a = 1;
	for (int i = 3; i < 24; i += 3) 
	{
		a *= 2;
		cout << "Часов " << i << "  Амеб " << a << endl;
	}


}