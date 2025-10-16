// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    //Задача 1
    int number_1_1, number_1_2, number_1_3;
    cout << "Введите 3 числа: " << endl;
    cin >> number_1_1>> number_1_2>> number_1_3;
    if (number_1_1 >= number_1_2 && number_1_1 >= number_1_3) {
        cout << "Наибольшое число" << number_1_1 << endl;
    }
    else if (number_1_2 >= number_1_1 && number_1_2 >= number_1_3) {
        cout << "Наибольшое число" << number_1_2 << endl;
    }
    else if (number_1_3 >= number_1_1 && number_1_3 >= number_1_2) {
        cout << "Наибольшое число " << number_1_3 << endl;
    }
    //Задача 2
    int n;
    cout << "Введите - n: " << endl;
    cin >> n;
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j*i << " ";
        }
        cout << endl;
    }
    //Задача 3
    int x;
    cout << "Введите число - X: " << endl;
    cin >> x;
    if (x % 3 == 0 && x % 5 == 0) {
        cout << "FizzBuzz" << endl;
    }
    else if (x % 3 == 0) {
        cout << "Fizz" << endl;
    }
    else if (x % 5 == 0) {
        cout << "Buzz" << endl;
    }
    //Задача 4
    int factor = 1;
    int n_4;
    cout << "Введи число - N:" << endl;
    cin >> n_4;
    for (int i = 1; i <= n_4; i++)
    {
        factor *= i;
    }
    cout << "Факториал: " << factor << endl;
    //Задача 6
    
    int n_6;
    cout << "Введите число - N: " << endl;
    cin >> n_6;
    /*
    Условие задачи оличается от примера 
    Если вполнять по условию задачи:
    */
    for (int i = 1; i <= n_6; i++)
    {
        if (i % 3 == 0) {
            cout << "Three ";
        }
        else if (i % 15 == 0) {
            cout << "ThreeFive ";
        }
        else {
            cout << i << " ";
        }
    }
}


