// файл Calc.cpp
#include <iostream>
#include <cmath>
using namespace std;
float func(float x);
void RegCikl(float a, float b, float h, float& yMax,
	float& yMin, int& nPos, int& nNeg)
{
	setlocale(LC_ALL, "rus");
	int n = int((b + h / 2 - a) / h) + 1;
	nPos = 0; nNeg = 0;
	yMin = 1E38; yMax = -1E38;
	float x, y;
	cout << endl << "Таблица значений функции" << endl;
	cout << "\tx\ty" << endl;
	for (int i = 1; i <= n; i++)
	{
		x = a + (i - 1) * h;
		y = func(x);
		if (y > yMax) yMax = y;
		if (y < yMin) yMin = y;
		if (y > 0) nPos++;
		if (y < 0) nNeg++;
		cout << "\t" << x << "\t" << y << endl;
	}
}
float func(float x)
{
	float a, b;
	a = float(pow(x, 3) - 6 * pow(x, 2) + 9  * x + 4);
	return a;
}