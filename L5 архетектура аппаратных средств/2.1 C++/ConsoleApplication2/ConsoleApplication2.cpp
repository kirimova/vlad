// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    float a, b, c;
    cin >> a >> b >> c;

    a *= (a >= 0) ? a : pow(a, 3);
    b *= (b >= 0) ? b : pow(b, 3);
    c *= (c >= 0) ? c : pow(c, 3);

    std::cout << a << " " << b << " " << c;
}

