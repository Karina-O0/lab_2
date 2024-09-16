// Lab_02.cpp
// < Печерна Каріна >
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 11
#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main()
{
	double A; // вхідний параметр
	double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу
	cout << "A = "; cin >> A;
	z1 = (1 -  2*(sin(A) * sin(A))) / (1 + 2*sin(A)+ sin(A));
	z2 = (1 - tan (A)) / (1 + tan (A));
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}
