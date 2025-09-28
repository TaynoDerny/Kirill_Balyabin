

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");

    int pizza, drinks;
    int pizza_quantity = 0, drinks_quantity = 0;
    int pizza_price = 0, drinks_price = 0;

    // Меню пиццы
    cout << "Выберете пиццу из меню" << endl;
    cout << "Не брать  - 0 Пицца - маргарита(7$) - 1  Пицца - пепперони(8$) - 2\nПицца - сырная(4$) - 3  Пицца - четыре сыра(5$) - 4" << endl;
    cout << "Введите код товара 1, 2, 3, 4 или не брать пиццу - 0" << endl;
    cin >> pizza;
    // Выбор количества пиццы и подсчет стоймости
    switch (pizza) {
    case 0:
        break;
    case 1:
        cout << "Введите количество пицц " << endl;
        cin >> pizza_quantity;
        pizza_price += pizza_quantity * 7;
        pizza_price -= (pizza_quantity / 5) * 7;
        break;
    case 2:
        cout << "Введите количество пицц " << endl;
        cin >> pizza_quantity;
        pizza_price += pizza_quantity * 8;
        pizza_price -= (pizza_quantity / 5) * 8;
        break;
    case 3:
        cout << "Введите количество пицц " << endl;
        cin >> pizza_quantity;
        pizza_price += pizza_quantity * 4;
        pizza_price -= (pizza_quantity / 5) * 4;
        break;
    case 4:
        cout << "Введите количество пицц " << endl;
        cin >> pizza_quantity;
        pizza_price += pizza_quantity * 5;
        pizza_price -= (pizza_quantity / 5) * 5;
        break;
    default:
        cout << "ОШИБКА - неверный код продукта" << endl;
        break;
    }
    // Меню напитков
    cout << "Выберете напиток из меню" << endl;
    cout << "Не брать - 0 Кола 0,5(1$) - 1  Молочный коктель 0,5(2$) - 2\n Шеколадный молочный коктель 0,5(3$) - 3" << endl;
    cout << "Введите код товара 1, 2, 3 или не брать напиток - 0" << endl;
    cin >> drinks;

    // Выбор количества напитков и подсчет стоймости
    switch (drinks) {
    case 0:
        break;
    case 1:
        cout << "Введите количество напитков " << endl;
        cin >> drinks_quantity;
        drinks_price += drinks_quantity * 1;
        break;
    case 2:
        cout << "Введите количество напитков " << endl;
        cin >> drinks_quantity;
        drinks_price += drinks_quantity * 2;
        break;
    case 3:
        cout << "Введите количество напитков " << endl;
        cin >> drinks_quantity;
        drinks_price += drinks_quantity * 3;
        if (drinks_quantity > 3) {
            drinks_price = drinks_price * 0.85;
            
            
        }
        break;
    default:
        cout << "ОШИБКА - неверный код продукта" << endl;
        break;

    }
    cout << "--- Чек к оплате ---\nПицца кличество - " << pizza_quantity << ", цена - " << pizza_price <<"\nНапитки кличество - " << drinks_quantity << ", цена - " << drinks_price <<"$"<< endl;
    cout << "--- Итог к оплате - " << pizza_price + drinks_price << "$" << " ---" <<endl;



    //Задача 2
    int level_sale_1, level_sale_2, level_sale_3;
    int pay_1 = 200, pay_2 = 200, pay_3 = 200;
    cout << "Ввидите уровень продаж для 1 - менеджера ";
    cin >> level_sale_1;
    cout << "Ввидите уровень продаж для 2 - менеджера ";
    cin >> level_sale_2;
    cout << "Ввидите уровень продаж для 3 - менеджера ";
    cin >> level_sale_3;

    if (level_sale_1 < 500) {
        pay_1 = 200 + level_sale_1 * 0.03;
    }
    else if (level_sale_1 >= 500 && level_sale_1 < 1000) {
        pay_1 = 200 + level_sale_1 * 0.05;
    }
    else {
        pay_1 = 200 + level_sale_1 * 0.08;
    }

    if (level_sale_2 < 500) {
        pay_2 = 200 + level_sale_2 * 0.03;
    }
    else if (level_sale_2 >= 500 && level_sale_2 < 1000) {
        pay_2 = 200 + level_sale_2 * 0.05;
    }
    else {
        pay_2 = 200 + level_sale_2 * 0.08;
    }

    if (level_sale_3 < 500) {
        pay_3 = 200 + level_sale_3 * 0.03;
    }
    else if (level_sale_3 >= 500 && level_sale_3 < 1000) {
        pay_3 = 200 + level_sale_3 * 0.05;
    }
    else {
        pay_3 = 200 + level_sale_3 * 0.08;
    }

    cout << "Зарплата первого менеджера - " << pay_1 << endl;
    cout << "Зарплата второго менеджера - " << pay_2 << endl;
    cout << "Зарплата третьего менеджера - " << pay_3 << endl;
    if (pay_1 > pay_2 && pay_1 > pay_3) {
        pay_1 += 200;
        cout << "Лучший менеджер первый его зарплата с премией - " << pay_1 << endl;
    }
    else if (pay_2 > pay_1 && pay_2 > pay_3) {
        pay_2 += 200;
        cout << "Лучший менеджер второй его зарплата с премией - " << pay_2 << endl;
    }
    else if (pay_3 > pay_1 && pay_3 > pay_2) {
        pay_2 += 200;
        cout << "Лучший менеджер третий его зарплата с премией - " << pay_2 << endl;
    }
    else
    {
        cout << "ОШИБКА - зарплаты равны уровень продаж у всех трех менеджеровразный"<< endl;
    }

    


    
    


    


}

