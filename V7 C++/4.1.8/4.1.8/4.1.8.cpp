// 4.1.8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<math.h>
#include<Windows.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int x;
	for (double i = 0; i <= 15; i++)
		cout << "x=" << i << " Ответ " << pow(i, 2) + i + 17<<endl;
	system("pause");
	return 0;


}

