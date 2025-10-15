
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout << i << " * " << j << " = " << i * j << endl;
		}
		cout << endl;
	}

	//Задача 2
	int n; int k = 0;
	cout << "Введите число - n" << endl;
	cin >> n;
	cout << "Все простые числа до " << n << ":" << endl;
	for (int i = 2; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0) {
				k++;
			}
		}
		if (k == 2) {
			cout << i << " ";
		}
		k = 0;
	}

	/*
					Для всех остальных задач нужны массивы 
	*/


}

