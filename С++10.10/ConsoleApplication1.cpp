
#include <iostream>



using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    /*
    //Задача 1

    int number_1= 0; int n_1 = 10;
    cout << "Введите число: " << endl;
    cin >> number_1;
    while (true) {
        if (((number_1 / n_1) % 10)==0) break;
        n_1 *= 10;
    }n_1 = 1;
    while (((number_1 / n_1) % 10) != 0) {
        cout << ((number_1 / n_1) % 10);
        n_1 *= 10;
    }cout << endl;

    //задача 2
    int number_5;
    int summ = 0;
    int n = 1;
    cout << "Введите 5-значное число: " << endl;
    cin >> number_5;
    for (int i = 0; i < 5; i++)
    {
        summ += (number_5 / n) % 10;
        n *= 10;

    }
    cout << "cумма чисил = " << summ << endl;




    ///Задача 3
    setlocale(LC_ALL, "ru");
    int day;
    int pyt = 15;
    int sum = 0;
    cout << "Введите количество дней: " << endl;
    cin >> day;
    int counter = 0;

    for (int i = 0; i < day; i++)
    {


        sum += pyt;
        pyt++;
        pyt++;



    }
    cout << "за " << day << " улитка проползла " << sum << "см" << endl;
    //Задача 4
    int countHeads = 0;
    cout << "Введите число 1 или 0 : " << endl;
    for (int i = 1; i <= 9; i++) {
        int result;
        cout << "Подбрасывание " << i << ": ";
        cin >> result;

        if (result == 1) {
            countHeads++;  // Увеличиваем счетчик орлов
        }
    }

    cout << "\nКоличество орлов: " << countHeads << endl;

    // Проверяем четность количества орлов
    if (countHeads % 2 == 0) {
        cout << "Решение: ПОЛОЖИТЕЛЬНОЕ (четное количество орлов)" << endl;
    }
    else {
        cout << "Решение: ОТРИЦАТЕЛЬНОЕ (нечетное количество орлов)" << endl;
    }
    

    /*
    */
    //Задача 5


    int month, start_day;
    cout << "Введите номер месяца (1-12) >";
    cin >> month;
    cout << "Введите номер дня недели (1-7), с которого начался месяц >";
    cin >> start_day;

    int days;
    switch (month) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        days = 31;
        break;
    case 4: case 6: case 9: case 11:
        days = 30;
        break;
    case 2:
        days = 28;
        break;
    default:
        return 1; 
    }

    cout << " Пн Вт Ср Чт Пт Сб Вс" << endl;

    int offset = start_day - 1;
    for (int i = 0; i < offset; ++i) {
        cout << "   ";
    }

    for (int day = 1; day <= days; ++day) {
        if (day < 10) {
            cout << "  " << day;
        }
        else {
            cout << " " << day;
        }
        int col = (offset + day - 1) % 7;
        if (col == 6) {
            cout << endl;
        }
    }
    cout << endl;

    int weekends = 0;
    for (int day = 1; day <= days; ++day) {
        int dow = ((day - 1) + (start_day - 1)) % 7 + 1;
        if (dow == 6 || dow == 7) {
            ++weekends;
        }
    }

    cout << "В этом месяце выходных дней: " << weekends << endl;

    return 0;
    

}