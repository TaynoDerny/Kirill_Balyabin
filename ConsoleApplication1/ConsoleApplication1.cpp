// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "ru");
    int number_user = 0; int n = 10; int number_col = 0; int summ_number = 0;
    int col_0 = 0;
    cout << "Введите число: " << endl;
    cin >> number_user;
    while (true)
    {
        number_col++;
        if ((number_user / n)==0 || (number_user / n) == -1) {
            cout << "Количество цифр в числе = " << number_col << endl;
            break;
        }
        
        n *= 10;
    }
    n = n / 10;
    int n2 = n;
    for (int i = 0; i < number_col; i++)
    {
        summ_number += (number_user / n)%10;
        n /= 10;
    }
    cout << "Сумма цифр в числе = " << summ_number << endl;
    for (int i = 0; i < number_col; i++)
    {
        if (((number_user / n2) % 10) == 0) {
            col_0++;
        }

        n2 /= 10;
    }
    cout << "Количество нулей в числе = " << col_0 << endl;
    cout << "Cреднее арефмитическое цифр числа = " << summ_number/(double)number_col << endl;
    //Задача 2
    int lengt_clet;
    cout << "Введите размер клетки: " << endl;
    cin >> lengt_clet;
    for (int i = 0; i < 8; i++)
    {
        cout << "\n";
        if (i%2==0) {
            for (int i = 0; i < 8; i++)
            {

                if (i % 2 == 0)
                {
                    for (int i = 0; i < lengt_clet; i++)
                    {
                        cout << "*";
                    }
                }
                else
                {
                    for (int i = 0; i < lengt_clet; i++)
                    {
                        cout << "_";
                    }
                }
            }
        }
        else 
        {
            
                for (int i = 0; i < 8; i++)
                {

                    if (i % 2 == 0)
                    {
                        for (int i = 0; i < lengt_clet; i++)
                        {
                            cout << "_";
                        }
                    }
                    else
                    {
                        for (int i = 0; i < lengt_clet; i++)
                        {
                            cout << "*";
                        }
                    }
                }
            
        }

    }
    cout <<"\n* - белый; _ - черный" << endl;
    //Задача 3
    int peopleCount;
    cout << "На сколько человек заказ? ";
    cin >> peopleCount;

    int totalSum = 0;

    for (int person = 1; person <= peopleCount; person++) {
        cout << "\n--- Заказ для человека " << person << " ---" << endl;
        int personSum = 0;

        while (true) {
            cout << "\nМеню:" << endl;
            cout << "1. Кофе - 150 руб." << endl;
            cout << "2. Чай - 100 руб." << endl;
            cout << "3. Сок - 120 руб." << endl;
            cout << "4. Пирожное - 80 руб." << endl;
            cout << "5. Булочка - 50 руб." << endl;
            cout << "6. Сэндвич - 200 руб." << endl;
            cout << "0. Закончить заказ этого человека" << endl;

            int choice;
            cout << "Выберите пункт меню: ";
            cin >> choice;

            if (choice == 0) {
                break;
            }

            if (choice == 1) {
                personSum += 150;
                cout << "Добавлено: Кофе за 150 руб." << endl;
            }
            else if (choice == 2) {
                personSum += 100;
                cout << "Добавлено: Чай за 100 руб." << endl;
            }
            else if (choice == 3) {
                personSum += 120;
                cout << "Добавлено: Сок за 120 руб." << endl;
            }
            else if (choice == 4) {
                personSum += 80;
                cout << "Добавлено: Пирожное за 80 руб." << endl;
            }
            else if (choice == 5) {
                personSum += 50;
                cout << "Добавлено: Булочка за 50 руб." << endl;
            }
            else if (choice == 6) {
                personSum += 200;
                cout << "Добавлено: Сэндвич за 200 руб." << endl;
            }
            else {
                cout << "Неверный выбор!" << endl;
                continue;
            }

            cout << "Текущая сумма для человека " << person << ": " << personSum << " руб." << endl;

            char more;
            cout << "Добавить еще что-то? (y/n): ";
            cin >> more;
            if (more == 'n' || more == 'N') {
                break;
            }
        }

        totalSum += personSum;
        cout << "Итог для человека " << person << ": " << personSum << " руб." << endl;
    }

    cout << "\n=== ОБЩИЙ ИТОГ ===" << endl;
    cout << "Общая сумма заказа: " << totalSum << " руб." << endl;
    cout << "Количество человек: " << peopleCount << endl;

    //задча 4
    char c = 'A';
    for (int d = 0; d <10 ; d++)
    {
        for (int i = 0; i < 10; i++) {
            cout << c << d << " ";
            c++;
            if (i == 9) {
                c = 'A';
            }
        }
        
        cout << endl;


    }







}

