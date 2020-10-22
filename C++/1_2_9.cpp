// 1.2.9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    double s, a, h, r,R;
    a = 4;
    h = (a * sqrt(3) / 2);
    s = (a * a * sqrt(3) / 4);
    r = (a * sqrt(3) / 6);
    R = 2 * r;
    std::cout << "h=" << h;
    std::cin >> h;
    return 0;

    
}

