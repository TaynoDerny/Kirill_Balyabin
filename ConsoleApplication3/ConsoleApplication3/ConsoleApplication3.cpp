#include <iostream>
#include <string>

using namespace std;


#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"
#define BLACK   "\033[30m"
#define GRAY    "\033[90m"


#define BG_BLACK   "\033[40m"
#define BG_RED     "\033[41m"
#define BG_GREEN   "\033[42m"
#define BG_YELLOW  "\033[43m"
#define BG_BLUE    "\033[44m"
#define BG_MAGENTA "\033[45m"
#define BG_CYAN    "\033[46m"
#define BG_WHITE   "\033[47m"
#define BG_GRAY    "\033[100m"

int main() {
    int textChoice, bgChoice;
    string textColor, bgColor;
    setlocale(LC_ALL, "ru");


   
    cout << "Выберите цвета текста:" << endl;
    cout << "1 - " << RED << "Красный" << RESET << endl;
    cout << "2 - " << GREEN << "Зеленый" << RESET << endl;
    cout << "3 - " << BLUE << "Синий" << RESET << endl;
    cout << "4 - " << YELLOW << "Желтый" << RESET << endl;
    cout << "5 - " << MAGENTA << "Фиолетовый" << RESET << endl;
    cout << "6 - " << CYAN << "Голубой" << RESET << endl;
    cout << "7 - " << WHITE << "Белый" << RESET << endl;
    cout << "8 - " << BLACK << "Черный" << RESET << endl;
    cout << "9 - " << GRAY << "Серый" << RESET << endl;

    cout << "Выберите цвет текста (1-9): ";
    cin >> textChoice;

   
    switch (textChoice) {
    case 1: 
        textColor = RED; 
        break;
    case 2: 
        textColor = GREEN; 
        break;
    case 3: 
        textColor = BLUE; 
        break;
    case 4: 
        textColor = YELLOW; 
        break;
    case 5: 
        textColor = MAGENTA; 
        break;
    case 6: 
        textColor = CYAN; 
        break;
    case 7: 
        textColor = WHITE; 
        break;
    case 8: 
        textColor = BLACK; 
        break;
    case 9: 
        textColor = GRAY; 
        break;
    default:
        cout << RED << "Ошибка: неверный выбор цвета текста!" << RESET << endl;
        return 1;
    }

    
    cout << "Цвета фона:" << endl;
    cout << "1 - " << BG_BLACK << "Черный" << RESET << endl;
    cout << "2 - " << BG_RED << "Красный" << RESET << endl;
    cout << "3 - " << BG_GREEN << "Зеленый" << RESET << endl;
    cout << "4 - " << BG_BLUE << "Синий" << RESET << endl;
    cout << "5 - " << BG_YELLOW << "Желтый" << RESET << endl;
    cout << "6 - " << BG_MAGENTA << "Фиолетовый" << RESET << endl;
    cout << "7 - " << BG_CYAN << "Голубой" << RESET << endl;
    cout << "8 - " << BG_WHITE << BLACK << "Белый" << RESET << endl;
    cout << "9 - " << BG_GRAY << "Серый" << RESET << endl;

    cout << "Выберите цвет фона (1-9): ";
    cin >> bgChoice;


    switch (bgChoice) {
    case 1:
        bgColor = BG_BLACK; 
        break;
    case 2: 
        bgColor = BG_RED; 
        break;
    case 3: 
        bgColor = BG_GREEN; 
        break;
    case 4: 
        bgColor = BG_BLUE; 
        break;
    case 5: 
        bgColor = BG_YELLOW; 
        break;
    case 6: 
        bgColor = BG_MAGENTA; 
        break;
    case 7: 
        bgColor = BG_CYAN; 
        break;
    case 8: 
        bgColor = BG_WHITE; 
        break;
    case 9: 
        bgColor = BG_GRAY; 
        break;
    default:
        cout << RED << "Ошибка: неверный выбор цвета" << RESET << endl;
        return 1;
    }


    cout << textColor << bgColor;
    
    cout << "Этот текст отображается с выбранными цветами и фоном" << endl;
    cout << "==============================" << RESET << endl;

    
    //Задача 2
    int number, degree;
    cout << "Напишите число: " << endl;
    cin >> number;
    cout << "Напишите степень от 0 до 7: "<< endl;
    cin >> degree;
    switch (degree) {
    case 0 :
        cout << "Выражение = " << 1 << endl;
        break;
    case 1 :
        cout << "Выражение = " << number << endl;
        break;
    case 2 :
        cout << "Выражение = " << number * number << endl;
        break;
    case 3:
        cout << "Выражение = " << number * number * number << endl;
        break;
    case 4:
        cout << "Выражение = " << number * number * number * number << endl;
        break;
    case 5:
        cout << "Выражение = " << number * number * number * number * number << endl;
        break;
    case 6:
        cout << "Выражение = " << number * number * number * number * number * number << endl;
        break;
    case 7:
        cout << "Выражение = " << number * number * number * number * number * number * number << endl;
        break;
    default:
        cout << RED << "Ошибка: неверный выбор степени" << RESET << endl;
        
    }



    return 0;
}