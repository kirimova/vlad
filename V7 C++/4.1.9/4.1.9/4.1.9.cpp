// 4.1.9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	for (int  k=0;k<=40; k++)
	cout << "a-" <<k<< " Ответы - " << pow(k, 2) + k + 41 << endl;
	system("pause");
	return 0;
}
 
