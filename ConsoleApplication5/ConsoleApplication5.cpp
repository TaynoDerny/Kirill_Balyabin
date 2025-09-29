
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    char symbol;

    cout << "Введите один симво: ";
    cin >> symbol;
    int asciiCode = (int)symbol;


    if ((asciiCode >= 65 && asciiCode <= 90) || (asciiCode >= 97 && asciiCode <= 122)) {
        
        cout << "Это буква" << endl;
    }
    else if (asciiCode >= 48 && asciiCode <= 57) {
        // Цифры: 0-9
        cout << "Это цифра" << endl;
    }
    else if ((asciiCode >= 33 && asciiCode <= 47) || (asciiCode >= 58 && asciiCode <= 64) || (asciiCode >= 91 && asciiCode <= 96) || (asciiCode >= 123 && asciiCode <= 126)) { 
        // Знаки препинания и специальные символы
        cout << "Это знак препинания или специальный символ" << endl;
    }
    else if (asciiCode == 32) {
        cout << "Это пробел" << endl;
    }
    else {
        cout << "Это другой символ" << endl;
    }
    // Задача 2

    int price_tolk_1 = 10, price_tolk_2 = 4 , price_tolk_3 = 7;
    int call_duration;
    int operator_;
    cout << "Напишите длительность разговора в минутах: " << endl;
    cin >> call_duration;
    cout << "Выберите оператора\n МТС(10р. в минуту) - 1; Yota(4р. в минуту) - 2; Мегафон(7р. в минуту) - 3;  " << endl;
    cin >> operator_;
    switch (operator_) {
    case 1:
        cout << "Стоймость звонка составит: " << price_tolk_1 * call_duration << endl;
        break;
    case 2:
        cout << "Стоймость звонка составит: " << price_tolk_2 * call_duration << endl;
        break;
    case 3:
        cout << "Стоймость звонка составит: " << price_tolk_3 * call_duration << endl;
        break;
    default:
        cout << "ОШИБКА - выберите оператора из предложеного списка" << endl;


    }
    //ЗАдача 3
    // Менб 1
    int desired_pay_1 = 0, number_delays_1 = 0;
    cout << "Введите желаемый доход васи: " << endl;
    cin >> desired_pay_1;
    cout << "Введите количество опосданий: " << endl;
    cin >> number_delays_1;

    cout << "Васи нужно напечать - " << (desired_pay_1 + (number_delays_1 / 3) * 20)/0.5  <<"cтрок кода" << endl;
    // меню 2 
    int desired_pay_2 = 0, str_code_2 = 0;
    cout << "Введите количество строк кода" << endl;
    cin >> str_code_2;
    cout << "Введите желаемый доход васи: " << endl;
    cin >> desired_pay_2;
    if ((str_code_2 * 0.5) > desired_pay_2) {
        cout << "Вася может опоздать " << ((str_code_2 * 1/2 - desired_pay_2) / 20) * 3 << " дней" << endl;
    }
    else
    {
        cout << "Зарплата васи меньше желаемого васе не может опазвать вовсе ему нужно больше работать" << endl;
    }
    //Меню 3
    int number_delays_3 = 0, str_code_3 = 0;
    cout << "Введите количество строк кода" << endl;
    cin >> str_code_3;
    cout << "Введите количество опосданий: " << endl;
    cin >> number_delays_3;
    if ((str_code_3 * 0.5) > ((number_delays_3 / 3) * 20)) {
        cout << "Васи заплатят " << (str_code_3 * 0.5) - (number_delays_3 / 3) * 20 << endl;
    }
    else
    {
        cout << "Вася слишком много опаздывал ему не заплатят вообще" << endl;
    }
   


        




    



}