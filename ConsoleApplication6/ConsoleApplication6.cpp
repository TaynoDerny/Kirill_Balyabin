// ConsoleApplication6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int estimation_1 = 0, estimation_2 = 0, estimation_3 = 0, estimation_4 = 0, estimation_5 = 0;
    cout << "Введите 5 оценок от 2 до 5" << endl;
    cin >> estimation_1; 
    cin >> estimation_2;
    cin >> estimation_3;
    cin >> estimation_4;
    cin >> estimation_5;
    if(estimation_1 >= 2 && estimation_1 <= 5 &&
        estimation_2 >= 2 && estimation_2 <= 5 &&
        estimation_3 >= 2 && estimation_3 <= 5 &&
        estimation_4 >= 2 && estimation_4 <= 5 &&
        estimation_5 >= 2 && estimation_5 <= 5)
    {
        if (((estimation_1 + estimation_2 + estimation_3 + estimation_4 + estimation_5) / 5.0)>=4) {
            cout << "Вы допущены к экзамену ваш средний бал " << (estimation_1 + estimation_2 + estimation_3 + estimation_4 + estimation_5) / 5.0 << endl;
        }
        else
        {
            cout << "Вы не допущены к экзамену ваш средний бал " << (estimation_1 + estimation_2 + estimation_3 + estimation_4 + estimation_5) / 5.0 << endl;
        }
        
    }
    else
    {
        cout << "ОШИБКА!! - введите 5 оценок от 2 до 5"<<endl;
    }

    //Задача 2
    int number_2_1;
    cout << "Введите число" << endl;
    cin >> number_2_1;
    if (number_2_1 % 2 == 0) {
        cout << number_2_1 * 3 << endl;
    }
    else
    {
        cout << number_2_1 / 2.0 << endl;
    }
    //Задача 3
    int number_3_1, number_3_2;
    char symbol;
    cout << "Введите два числа: " << endl;
    cin >> number_3_1;
    cin >> number_3_2;
    cout << "Введите арефметическое действие: " << endl;
    cin >> symbol;
    switch(symbol){
    case '+':    
        cout << number_3_1 << symbol << number_3_2 << " = " << number_3_1 + number_3_2 << endl;
    case '-':
        cout << number_3_1 << symbol << number_3_2 << " = " << number_3_1 - number_3_2 << endl;
    case '*':
        cout << number_3_1 << symbol << number_3_2 << " = " << number_3_1 * number_3_2 << endl;
    case '/':
        cout << number_3_1 << symbol << number_3_2 << " = " << number_3_1 / number_3_2 << endl;


    }
   

}

