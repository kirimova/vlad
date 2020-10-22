// 1.2.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    int  C;
    float S, pi = 3.14;
    cout << "C=";
    cin >> C;
    S = C * C / (4 * pi);
    cout << "S=";
    cin >> S;
    getch();
    return 0;
    
}