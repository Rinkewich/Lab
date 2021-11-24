//файл GetPut.cpp с функциями ввода и вывода
#include <iostream>
using namespace std;
void Get(float& a, float& b, float& h)
{
	setlocale(LC_ALL, "rus");
	cout << "Введите нижнюю границу отрезка: ";
	cin >> a;
	cout << "Введите верхнюю границу отрезка: ";
	cin >> b;
	cout << "Введите шаг таблицы: ";
	cin >> h;
}
void Put(float yMax, float yMin, int nPos, int nNeg)
{
	setlocale(LC_ALL, "rus");
	cout << endl << "Наибольшее значение функции: " << yMax << endl;
	cout << "Наименьшее значение функции: " << yMin << endl;
	cout << "Число положительных значений функции: " << nPos << endl;
	cout << "Число отрицательных значений функции: " << nNeg << endl;
}