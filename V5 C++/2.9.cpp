// 2.9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double  c, a, b;
    int k = 0;
    cout << "Ведите число a:";
    cin >> a;
    cout << "Ведите число b:";
    cin >> b;
    cout << "Ведите число c:";
    cin >> c;
    if ((int)a == a) ++k;
    if ((int)b == b) ++k;
    if ((int)c == c) ++k;
    cout << "Количество целых чисел в исходном наборе : " << k<< endl;
    system("pause");
    return 0;
}

