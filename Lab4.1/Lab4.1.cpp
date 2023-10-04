//Lab_04_1.cpp
//<Дуневич_Роман>
//Лабораторна робота №4.1
//Цикли
//Варіант 20


#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int k, N, i;
	double S;

	cout << " k = "; cin >> k;
	cout << " N = "; cin >> N;

	S = 0;
	i = k;
	while (i <= N)
	{
		S += (sin(1.) * cos(i) / (1 + cos(2) * i));
		i++;
	}
	cout << S << endl;

	S = 0;
	i = k;
	do {
		S += (sin(1.) * cos(i) / (1 + cos(2) * i));
		i++;
	} while (i <= N);
	cout << S << endl;

	S = 0;
	for (i = k; i <= N; i++)
	{
		S += (sin(1.) * cos(i) / (1 + cos(2) * i));
	}
	cout << S << endl;

	S = 0;
	for (i = N; i >= k; i--)
	{
		S += (sin(1.) * cos(i) / (1 + cos(2) * i));
	}
	cout << S << endl;

	return 0;
}