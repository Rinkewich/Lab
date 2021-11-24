// Файл main.cpp
#include <iostream>
using namespace std;
void GetXY(float& x, float& y);
void Put(bool, float, float);
bool Resh1(float x, float y);
bool Resh2(float x, float y);
bool Resh3(float x, float y);
int main()
{
	float x, y;
	bool b, c, d; // Признак попадания в заданную область
	GetXY(x, y); // Вызов функции ввода исходных данных
	cout << " Решение 1-й функции:" << endl;
	b = Resh1(x, y); // Вызов 1-й функции решения
	Put(b, x, y); // Вызов функции вывода результатов
	cout << " \nРешение 2-й функции:" << endl;
	c = Resh2(x, y); // Вызов 2-й ф-ции решения
	Put(c, x, y);
	cout << "\n Решение 3-й функции:" << endl;
	d = Resh3(x, y); // Вызов 3-й ф-ции решения
	Put(d, x, y);
	system("PAUSE");
	return 0;
}