#include <iostream> 
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    
    const int size = 9;//Ошибка - длина массива не может быть double
    double arr[size] = { -5.7, 6.0, 2, 0, -4.7, 6,
                      8.1, -4, 0 };
    double positive = 0;//Ошибка - что бы чесло вывелось с точкокой нужно спользовать double
    for (int i = 0; i < size; i++)// Ошибка - size и 0 перепутаны, i >= 0 должно быть i < size
    {
        if (arr[i] > 0)
        {
            positive = arr[i];
                                //Ошибка - break не нужен так как нужно последнее число
        }
    }
    double negative = 0; //Ошибка - что бы чесло вывелось с точкокой нужно спользовать double
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            negative = arr[i];
            break;
        }
    }
    cout << "Last positive number: " << positive <<
        endl;
    cout << "First negatine number: " << negative <<
        endl;
    //Задача 2
        /*
    Входными данными во всех описанных ниже зада
 ниях является массив из 10 элементов, заполненный
пользователем с клавиатуры.
*******************************************************
Это протеворечит условию задачи в 5 этажной квартире где 10 квартир не может быть 2 квартиры на каждом этаже
Пусть Квартир 11
    */
    const int size_kv = 11;
    int arr_kv[size_kv];
    int kv, summ_kv=0,family_big=0;
    cout << "Введите количество жильцов в 10 квартирах";
    for (int i = 0; i < size_kv; i++)
    {
        cin >> arr_kv[i];
        summ_kv += arr_kv[i];
        if (arr_kv[i] > 5)
            family_big++;
            family_big++;

    }
    cout << "Выберите номер квартиры (1 - 10) где нужно определить количество жильцов а также соседей:" << endl;
    cin >> kv;
    if (kv>=1&&kv<=10){
        cout << "В квартире "<<kv<<"проживает "<< arr_kv[kv-1]<<" человек" << endl;
        if (kv % 2 == 0) {
            cout << "Соседняя квартира " << kv - 1 << "в ней проживает " << arr_kv[kv - 1 - 1];
        }
        else
        {
            cout << "Соседняя квартира " << kv + 1 << "в ней проживает " << arr_kv[kv];
        }
    }
    //Так как квартир 11 подьезд 1
    cout << "Сумарное количество жильцов подъезда " << summ_kv<<endl;
    cout << "Количество многодетных семей " << family_big << endl;

















   //Задача 3
    const int size_ = 10;
    int arr_3[size_];
    int temp=0,temp_b=0,summ_temp_b=0;
    cout << "Укажите отметку теппературы" << endl;
    cin >> temp_b;
    cout << "Введите температуру воздуха:" << endl;
    for (int i = 0; i < size_; i++)
    {
        cin >> arr_3[i];
        if (arr_3[i] < temp_b)
            summ_temp_b++;
        temp += arr_3[i];
    }
    cout << "Средняя температура за месяц " << temp / size_ << endl;
    cout << "температура воздуха опускалась ниже указанной метки " << summ_temp_b <<" раз" << endl;

    //Задача 4
    int arr_4[size_];
    int price_max = 0;
    int nomer[size_];
    int j = 0;
    cout << "Введите стоимость для 10 автомобилей: " << endl;
    for (int i = 0; i < size_; i++)
    {
        cin >> arr_4[i];
        if (arr_4[i] >= price_max) {
            price_max = arr_4[i];
            nomer[j] = i;
            j++;
        }
            

    }
    cout << "Сумма наиболее дорогово авто = " << price_max << endl;
    cout << "Номер:" << endl;
    for (int i = 0; i < j; i++)
    {
        cout << nomer[i] << " ";
    }




    
}   
