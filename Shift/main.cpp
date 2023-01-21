#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	
	const int n = 10;
	int mass[n] = { 0,	1,	2,	3,	4,	5,	6,	7,	8,	9 };
	for (int i = 0; i < n; i++)
	{
		cout << mass[i] << "\t";
	}
	int t = mass[0];
	int a = mass[1];
	int c = mass[2];
	cout << endl;
	//cout << "ввести количество сдвига влево:"; cin >> N;
	for (int i = 0; i < n - 1; i++)
	{
		mass[i] = mass[i+1];
	}
	mass[9] = t;
	for (int i = 0; i < n; i++)
	{
		cout << mass[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < n - 1; i++)
	{
		mass[i] = mass[i + 1];
	}
	mass[9] = a;
	for (int i = 0; i < n; i++)
	{
		cout << mass[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < n - 1; i++)
	{
		mass[i] = mass[i + 1];
	}
	mass[9] = c;
	for (int i = 0; i < n; i++)
	{
		cout << mass[i] << "\t";
	}
	cout << endl;

}