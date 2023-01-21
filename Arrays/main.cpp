#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	//arr[2] = 1024;
	//cout << arr[2] << endl;
	cout << "Введите элемент:";
	for (int i = 0; i < n; i++)
	{
		cin>> arr[i];
	}
	//Вывод массива на экран в прямом порядке
	for (int i = 0; i < n; i++)
	{
		cout << arr[i]<<"\t";
	}
	cout << endl;
	//Вывод массива на экран в обратном порядке
		for (int i = n-1; i>=0 ; i--)
	{
			cout << arr[i] << "\t";
	}
	cout << endl;
	//Вычисление суммы элементов массива

		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum += arr[i];
		}
		cout << sum;
		cout << endl;
		//Вычисление среднего арифмитического
		int arithmeticmean = sum / n;
		cout << arithmeticmean;
		cout << endl;
		//Вывод максимального и минимального значения
		//
	}	

