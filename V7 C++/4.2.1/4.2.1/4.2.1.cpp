// 4.2.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int i, n;
    double S = 0;
   
    cout << "Введите n: "; 
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
            // смотрим число четное или нет
        {
            S -= 1 / pow(2, i);

        }
        if (i % 2 == 0)
        {
            S += 1 / pow(2, i);
        }
    }
    S += 1;
    cout << "S=" << S << endl;
    return 0;
}