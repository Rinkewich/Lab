// Файл GetPut.cpp с функциями ввода и вывода
#include <iostream>
using namespace std;
// Определение функции ввода
void GetXY(float& x, float& y)
{
	setlocale(LC_ALL, "rus");
	cout << " Введите координаты точки x, y\n ";
	cin >> x >> y;
}
// Определение функции вывода
void Put(bool b, float x, float y)
{
	setlocale(LC_ALL, "rus");
	cout << " Точка с координатами ( " << x << " ," << y << " )" << endl;
	if (b) cout << "попала в заданную область" << endl;
	else cout << "не попала в заданную область" << endl;
}