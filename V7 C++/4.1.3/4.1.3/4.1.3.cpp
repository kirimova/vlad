// 4.1.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int i, T,p;
    cout << "Введите предельное количество часов: ";
    cin >> T;
    for (i = 3; i <= T; i += 3)
        
    {
        p *=2 ;
        cout << "Время, час " << i << " амеб: " << p<< endl;
    }
   
    system("PAUSE");
    return 0;
}

