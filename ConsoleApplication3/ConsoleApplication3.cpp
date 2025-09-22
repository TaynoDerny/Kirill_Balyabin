
#include <iostream>
using namespace std;
int main()
{  
    setlocale(LC_ALL, "ru");
    
    //Задача 1
    int number_6;
    cout << "Ввидите шестизнчное число: ";
    cin >> number_6;
    if (99999 > number_6 < 1000000) {
        if ((number_6 / 100000) + ((number_6 / 10000) % 10) + ((number_6 / 1000) % 10) == ((number_6 % 10) + ((number_6 % 100) / 10) + ((number_6 % 1000) / 100))) {
            cout << "Число счастливое\n";
        }
        else
        {
            cout << "Число не счастливое\n";
        }



    }
    else
    {
        cout << "ОШИБКА: Число не шестизначное\n";
    }

    //Задание 2
    int number_4;
    cout << "Ввидите четырехзначное число число: ";
    cin >> number_4;
    if (999 > number_4 < 10000) {
        int number_4_1 = number_4 / 1000;
        int number_4_2 = (number_4 / 100) % 10;
        int number_4_3 = (number_4 / 10) % 10;
        int number_4_4 = number_4  % 10;
        cout << number_4_2 << number_4_1 << number_4_4 << number_4_3;
    }
    else
    {
        cout << "ОШИБКА: Число не четырехзначное ";
    }
    //Задача 3
    int number_max;
    int number_max_1;
    cout << "Введите число: ";
    cin >> number_max_1;
    int number_max_2;
    cout << "Введите число: ";
    cin >> number_max_2;
    int number_max_3;
    cout << "Введите число: ";
    cin >> number_max_3;
    int number_max_4;
    cout << "Введите число: ";
    cin >> number_max_4;
    int number_max_5;
    cout << "Введите число: ";
    cin >> number_max_5;
    int number_max_6;
    cout << "Введите число: ";
    cin >> number_max_6;
    int number_max_7;
    cout << "Введите число: ";
    cin >> number_max_7;

    if (number_max_1 > number_max_2){;




}

