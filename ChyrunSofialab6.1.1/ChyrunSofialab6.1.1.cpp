// ChyrunSofialab6.1.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lab_06_1.cpp
// < Чирун Софія >
// Лабораторна робота № 6.1.1
// Пошук елементів одновимірного масиву ітераційним способом  
// Варіант 18

#include <iostream>
#include <time.h>

using namespace std;

int Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
	return *a;
}

int Sum(int* mas, const int size) 
{
	int s = 0;
	for (int i = 0; i < size; i++)
		s += mas[i];
	return s;
}

int SumCriteria(int* mas, const int size) 
{
	int s = 0;
	for (int i = 0; i < size; i++)
		if (mas[i] % 2 == 0 && (i + 1) % 7 != 0) 
		{
			s += mas[i];
			mas[i] = 0;
		}
	return s;
}

int main()
{
	srand((unsigned)time(NULL)); 
	const int n = 26;
	int a[n];
	int Low = 3;
	int High = 92;
	Create(a, n, Low, High);
	for (int i = 0; i < n; i++)
		cout << a[i] << "   ";
	    cout << endl << "Sall = " << Sum(a, n) << endl;
	    cout << endl << "Scriteria = " << SumCriteria(a, n) << endl;
	for (int i = 0; i < n; i++)
		cout << a[i] << "   ";
    return 0;
}

