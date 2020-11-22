// 2.2.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
using namespace std; 
int main()
{
    setlocale(LC_ALL, "Russian");
    double x=0, y, a=7.5, b=2.1, c=4.2;
    if (x <= 3)
        y = x * x + 3 * x + 9;
    else if (x > 3)
        y = 1 / pow(x, 3) + 6;
    cout << "Найдем значение y:" << y << endl;
    system("pause");
    return 0;
}

