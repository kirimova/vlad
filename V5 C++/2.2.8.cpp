// 2.2.8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    int x = 0, y;
    if (x <= 2)
        y = pow(x, 2) + 4 * x + 5;
    else if (x > 2)
        y = 1 / pow(x, 2) + 4 * x + 5;
   std:: cout<< "Найдем значение y=" << y <<std::endl;
    system("pause");
    return 0;
}

