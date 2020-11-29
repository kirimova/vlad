// 3.6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int q;
    cout << "Введите  оценку:";
    cin >> q;
    switch (q)
    {
    case 1:cout << "Оценка 1 --плохо";
        break;
    case 2:cout << "Оценка 2-- неудовлетворительно";
        break;
    case 3:cout << "Оценка 3--удовлетворительно";
        break;
    case 4: cout << "Оценка 4-- хорошо";
        break;
    case 5: cout << "Оценка 5--отлично";
        break;
    default: cout << "Введена не правильная оцека";
      }
    cout << "\n";
    system("pause");
    return 0;
}
         
             

