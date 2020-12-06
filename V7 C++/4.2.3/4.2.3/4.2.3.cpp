// 4.2.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int i ,n;
	float S = 0;
	cout << "Введите число n=";
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		if (i % 2 == 1)
		{
			S -= 2 * n / 2 * n + 1;
		}
		if (i % 2 == 0)
		{
			S == 2 * n / 2 * n + 1;
		}

	}
	S += 1;
	cout << "S=" << S << endl;
	system("pause");
	return 0;
}

