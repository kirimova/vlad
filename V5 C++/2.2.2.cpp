// 2.2.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    long x = 3, y;
    if (x >= 3)
        y = pow(-x, 2) + 3*x + 9;
    else if (x < 3)
        y = x / pow(x, 3) - 6;
    cout << "Найдити значение y:"<<y << endl;
    system("pause");
    return 0;
}

