// Файл Raz с функциями Razv, Razm, maxMy и minMy
#include <cmath>
// Определение ф-ции с вложенными разветвлениями,без дополнительных функций
double Razv(double x, double z, int& n)
{
	double answer; // Локальная переменная ФУНКЦИИ
	if (z < 0 && x < 0)
	{
		if (z <= x)
			answer = z;
		else
			answer = x;
		n = 1; // Номер ветки
	}
	else
	{
		if (z > 0 && x > 0)
		{
			double r1 = pow(x + z, 1 / 3), r2 = cos(x * z);
			answer = x;
			if (answer < r1)
				answer = r1;
			if (answer < r2)
				answer = r2;
			n = 2;
		}
		else
		{
			answer = x + z;
			n = 3;
		}
	}
	return (answer);
}
double minMy(double x, double z);
double maxMy(double x, double z);
double Razm(double x, double z, int& n)
{
	if (z < 0 && x < 0)
	{
		n = 1;
		return (minMy(x, z));
	}
	else
	{
		if (z > 0 && x > 0)
		{
			n = 2;
			return (maxMy(x, maxMy(pow(x + z, 1 / 3), cos(x * z))));
		}
		else
		{
			n = 3;
			return (x + z);
		}
	}
	
}
double minMy(double x, double z)
{
	double f;
	if (x < z) f = x; else f = z;
	return f;
}
double maxMy(double x, double z)
{
	double f;
	if (x > z) f = x; else f = z;
	return f;
}