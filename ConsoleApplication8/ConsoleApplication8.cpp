// ConsoleApplication8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int a;
    int summ = 0 ;
    cout << "Введите значение - a" << endl;
    cin >> a;
    while (a <= 500) {
        summ += a;
        a++;

    }
    cout << summ << endl;
    //Задача 2
    int y;
    int x;
    int summ_2=1;
    int counter=0;
    cout << "Введите значение - x" << endl;
    cin >> x;
    cout << "Введите значение - y" << endl;
    cin >> y;
    while (counter<y) {
        summ_2 *= x;
        counter++;
    }
    cout << x << "^" << y << " = " << summ_2 << endl;
    
    //Задача 3
    cout << "Средне арефметическое от 1 1000 = " << (1000 + 1) / 2.0 << endl;
    // Задача 4
    int a_4;
    long long summ_4 = 1;
    cout << "Введите значение - a" << endl;
    cin >> a_4;
    while (a_4 <= 20) {
        summ_4 *= a_4;
        a_4++;

    }
    cout << summ_4 << endl;
    //Задача 5
    int k = 0;
    int counter_5 = 2;
    cout << "Какой вариант таблицы умножения вывести? " << endl;
    cin >> k;
    while (counter_5<=9) {
        cout << k << "*" << counter_5 << " = " << k * counter_5 << endl;
        counter_5++;
    }

    return 0;
}

