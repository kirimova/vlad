// 4.1.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <math.h>
#include <iostream>
using namespace std;
int main()
{
    float i, n, S, a;
    //i-дни
    //S- пройденых километров
    a = 10;
    S = 0;
    for (i = 0; i <= 5; ++i)
    {
        n = a + ((a *10/100))*i;
        S = S + n;
        cout << i << "; " << n << endl;
    }
    cout << S << endl;
    system("pause");
}