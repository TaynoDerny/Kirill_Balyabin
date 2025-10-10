// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{setlocale(LC_ALL, "ru");
//Задача 1
    int a, b;
    cout << "Введите начало диапазона A: \n";
    cin >> a;
    cout << "Введите конец диапазона B: \n";
    cin >> b;

    for (int i = a; i <= b; i++) {
        cout << "Делители для числа " << i << " – ";
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                cout << j;
                if (j != i) cout << " ";
            }
        }
        cout<< endl;
    }
//Задача 2

    cout << "\nПростые числа от 2 до 1000:\n";
    for (int i = 2; i <= 1000; i++) {
        bool n = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                n = false;
                break;
            }
        }
        if (n) cout << i << " ";
    }
    cout << endl;
//Задача 3
    int number_3;
    cout << "Введите нечётное положительное число (высота/ширина): ";
    cin >> number_3;

    if (number_3 % 2 == 0 || number_3 <= 0) {
        cout << "ОШИБКа - число должно быть положительным и нечётным!" << endl;
        return 0;
    }

    for (int i = 0; i < number_3; i++) {
        for (int j = 0; j < number_3; j++) {
            if (i == j || j == number_3 - 1 - i||i==number_3/2|| j == number_3 / 2)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
//Задача 4
    int count = 0;

    cout << "\nВсе возможные трёхзначные коды (цифры не повторяются):" << endl;
    for (int i = 0; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            for (int k = 0; k <= 9; k++) {
                if (i != j && i != k && j != k) {
                    cout << i << j << k <<" ";
                    count++;
                }
            }
        }
    }
//Задача 5
    int workers = 12; 
    int march, april, may; 
    int pay_sum = 0; 

    cout << "\nВведите зарплаты 12 сотрудников за март, апрель и май: "<<endl;

    for (int i = 1; i <= workers; i++) {
        cout << "\nСотрудник " << i << ":" << endl;
        cout << "  Март: ";
        cin >> march;
        cout << "  Апрель: ";
        cin >> april;
        cout << "  Май: ";
        cin >> may;

        int sum = march + april + may;
        cout << "  Сумма за квартал: " << sum << endl;

        pay_sum += sum;
    }
    2

    cout << "\nОбщая сумма выплат всем сотрудникам за квартал: " << pay_sum << endl;


    return 0;
}