// 3.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<stdio.h>
#include<Windows.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int x;
        cout << "Напишите число недели :";
    cin >> x;

        switch (x)
        {
        case 1: printf("Понедельник: 7 уроков ");
            break;
        case 2: printf("Вторник: 6 уроков");
            break;
        case 3: printf("Среда: 6 уроков");
            break;
        case 4: printf("Четверг: 4 урока");
            break;
        case 5: printf("Пятница: 5 уроков");
            break;
        case 6: printf("Суббота: нет уроков");
            break;
        case 7: printf("Воскресенье: нет уроков");
            break;
        default: printf("Неправильное число");
            break;
        }
        cout<<"\n";
    

    system("pause");
    return 0;
}