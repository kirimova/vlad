// 2.8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    int a, b, c;
    int F=0;
    cout << "Впишите число :";
    cin >> a;
    cout << "Впишите число :";
    cin >> b; 
    cout << "Впишите число :";
    cin >> c;
    if (a > 0) ++F;
    if (b > 0) ++F;
    if (c > 0) ++F;
    cout << "Число положительных чисел :" << F << endl;
    system("pause");
    return 0;
}

