// 2.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    float a, b, c;
    cin >> a >> b >> c;

    a *= (a >= 0) ? a : (a*a*a);
    b *= (b >= 0) ? b : (b*b*b);
    c *= (c >= 0) ? c : (c*c*c);

    std::cout << a << " " << b << " " << c << endl;
    system("pause");
    return 0;
}

