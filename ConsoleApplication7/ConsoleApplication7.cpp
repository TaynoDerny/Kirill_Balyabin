#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int secret_number = 42;
    int game_start;
    int number_user;
    int attemptt = 0;
    cout << "Игра угадай число: 0 - Выдти; 1 - Играть  " << endl;
    cin >> game_start;
    if (game_start != 0 && game_start != 1) {
        cout << "Ошибка - введите либо 0 либо 1" << endl;
    }
    while (game_start == 1) {
            cout << "Угадайте число от 1  до 500" << endl;
            attemptt++;
            cin >> number_user;
            if (number_user == secret_number) {
                cout << "Вы угадали число" << endl;
                cout << "Количество попыток - " << attemptt << endl;
                game_start = 0;
            }
            else if (number_user == 0) {
                cout << "Вы вышли из игры и не угадали число" << endl;
                game_start = 0;
            }
            else if (number_user > secret_number) {
                cout << "Вы не угадали число" << endl;
                cout << "Если вам надоело играть введите  - 0" << endl;
                cout << "Ваше число больше загаданнного" << endl;
            }
            else if (number_user < secret_number) {
                cout << "Вы не угадали число" << endl;
                cout << "Если вам надоело играть введите  - 0" << endl;
                cout << "Ваше число меньше загаданнного" << endl;
            } 
    }
    // Задача 2
    double USD_TO_RUB = 82.87;
    double EUR_TO_RUB = 97.14;
    double CNU_TO_RUB = 11.6;
    bool converter;
    int choice;
    int summ;
    do {
        cout << "\n=== КОНВЕРТЕР ВАЛЮТ ===" << endl;
        cout << "1. RUB -> USD" << endl;
        cout << "2. USD -> RUB" << endl;
        cout << "3. RUB -> EUR" << endl;
        cout << "4. EUR -> RUB" << endl;
        cout << "5. CNY -> RUB" << endl;
        cout << "6. RUB -> CNY" << endl;
        cout << "0. Выход" << endl;
        cout << "Выберите операцию: " << endl;
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "Какую сумму вы хочите конвертировать ?" << endl;
            cin >> summ;
            cout << summ << "RUB = " << summ / USD_TO_RUB << "USD" << endl;
            break;
        case 2:
            cout << "Какую сумму вы хочите конвертировать ?" << endl;
            cin >> summ;
            cout << summ << "USD = " << summ * USD_TO_RUB << "RUB" << endl;
            break;
        case 3:
            cout << "Какую сумму вы хочите конвертировать ?" << endl;
            cin >> summ;
            cout << summ << "RUB = " << summ / EUR_TO_RUB << "EUR" << endl;
            break;
        case 4:
            cout << "Какую сумму вы хочите конвертировать ?" << endl;
            cin >> summ;
            cout << summ << "EUR = " << summ * EUR_TO_RUB << "RUB" << endl;
            break;
        case 5:
            cout << "Какую сумму вы хочите конвертировать ?" << endl;
            cin >> summ;
            cout << summ << "RUB = " << summ / CNU_TO_RUB << "CNY " << endl;
            break;
        case 6:
            cout << "Какую сумму вы хочите конвертировать ?" << endl;
            cin >> summ;
            cout << summ << "CNY = " << summ * CNU_TO_RUB << "RUB" << endl;
            break;
        default:
            cout << "ОШИБКА - Выберети от 1 до 6 " << endl;
            break;
        }
        cout << "Хотите еще что то конвертировать ? ДА - 1; НЕТ - 0" << endl;
        cin >> converter;
        if (converter!=1 || converter != 0) {
            cout << "ОШИБКА - введите либо 0 либо 1" << endl;
            return 0;
        }

    } while (converter == 1);





}
