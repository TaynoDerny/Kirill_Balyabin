#include <iostream>


using namespace std;
int main() {

	setlocale(LC_ALL, "ru");
	int number_1, number_2, number_3;
	cout << "введите 3 целых числа:\n ";
	cin >> number_1 >> number_2 >> number_3;
	if (number_1 == number_2 && number_1 == number_3) {
		cout << "\nТреугольник равностароний\n";
	}
	if (number_1 == number_2 || number_1 == number_3 || number_3 == number_2) {
		cout << "Треугольник равнобедренный\n";
	}
	if (number_1 != number_2 && number_3 != number_2 && number_3 != number_1) {
		cout << "Треугольник разностороний\n";
	}
	if ((number_1 + number_2) <= number_3 || (number_1 + number_3) <= number_2 || (number_3 + number_2) <= number_1) {
		cout << "Не триугольник\n\n";
	}
	//Задача 2
	int a, b, c;
	cout << "введите 3 целых числа:\n ";
	cin >> a >> b >> c;
	int Discriminant;
	Discriminant = b * b - 4 * a * c;
	if (Discriminant > 0) {
		cout << "2 корня\n";
	}
	if (Discriminant == 0) {
		cout << "1 корень\n";
	}
	if (Discriminant < 0) {
		cout << "корней нет\n";
	}

	//Задача 4
    int month, number;
    cout << "Введите номер месяца: ";
    cin >> month;
    cout << "Введите число месяца: ";
    cin >> number;

    if (month == 12 || month == 1 || month == 2) {
        cout << "Зима. ";
    }
    else if (month > 2 && month < 6) {
        cout << "Весна. ";
    }
    else if (month > 5 && month < 9) {
        cout << "Лето. ";
    }
    else {
        cout << "Осень. ";
    } if (month == 6 || month == 4 || month == 9 || month == 11) {
        if (number == 30) {
            cout << "Сегодня последний день месяца.";
        }
        else {
            cout << "Это не последний день месяца.";
        }
    }
    else if (month == 2) {
        if (number == 28) {
            cout << "Сегодня последний день месяца.";
        }
        else {
            cout << "Это не последний день месяца.";
        }
    }
    else {
        if (number == 31) {
            cout << "Сегодня последний день месяца.";
        }
        else {
            cout << "Это не последний день месяца.";
        }
    }
    
	
}