// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>
using namespace std;
int main()
{ setlocale(LC_ALL, "ru"); srand(time(NULL));
int level;
int number;
int statistic = 0;
cout << "Проверка заний таблицы умножения!!" << endl;
cout << "Выберите уровень сложности:\n1 - Легкий; 2 - Средний; 3 - Сложный; " << endl;
cin >> level;
switch(level){
case 1:
    for (int i = 0; i < 3; i++)
    {
        int a_rand = rand() % 9 + 1; int b_rand = rand() % 9 + 1;
        cout << a_rand << " * " << b_rand << " = ?" << endl;
        cin >> number;
        if (number == a_rand * b_rand) {
            cout << "Верно"<< endl;
            statistic++;
        }
        else
        {
            cout << "Не верно" << endl;
        }
    }
    cout << "Оценка знаний\nВы прошли Легкий уровень на " << statistic << "/3" << endl;
    break;
case 2:
    for (int i = 0; i < 5; i++)
    {
        int a_rand = rand() % 15+10; int b_rand = rand() % 15+10;
        cout << a_rand << " * " << b_rand << " = ?" << endl;
        cin >> number;
        if (number == a_rand * b_rand) {
            cout << "Верно" << endl;
            statistic++;
        }
        else
        {
            cout << "Не верно" << endl;
        }
    }
    cout << "Оценка знаний\nВы прошли Средний уровень на " << statistic << "/5" << endl;
    break;
case 3:
    for (int i = 0; i < 10; i++)
    {
        int a_rand = rand() % 70 + 30; int b_rand = rand() % 70 + 30;
        cout << a_rand << " * " << b_rand << " = ?" << endl;
        cin >> number;
        if (number == a_rand * b_rand) {
            cout << "Верно" << endl;
            statistic++;
        }
        else
        {
            cout << "Не верно" << endl;
        }
    }
    cout << "Оценка знаний\nВы прошли Сложный уровень на " << statistic << "/10" << endl;
    break;
default:
    cout << "ОШИБКА - Выберите 1; 2; или 3" << endl;
    break;
}
//Задача 2
int size;
cout << "Введите размер ромба(Не четное число)" << endl;
cin >> size;
if (size % 2 == 0) {
    cout << "ОШИБКА - Вы ввели четное число" << endl;
    return 0;
}
for (int i = 0; i < size; i++)
{
    cout << endl;
    for (int j = 0; j < size; j++)
    {
        if (j==(size/2)-i||j==(size / 2) + i|| i == (size / 2) + j||i + j == (size - 1) + (size / 2)) {
            cout << "*";
        }
        else
        {
            cout << " ";
        }
    }
}

return 0;
}

