// ‘айл с функци€ми решени€ задачи, реализующие функциональные алгоритмы
#include <cmath>
// 1-ый способ Ц стандартное разветвление с логическими операци€ми
bool Resh1(float x, float y)
{
	if (x < 0 && pow(x, 2) + pow(y, 2) <= 1 &&
		pow(x, 2) + pow(y, 2) <= sqrt(2))
		return (true);
	else
		return (false);
}
// 2-ой способ Ц вложенные разветвлени€ только с помощью операций отношени€
bool Resh2(float x, float y)
{
	if (x < 0)
	{
		if (pow(x, 2) + pow(y, 2) <= 1)
		{
			if (pow(x, 2) + pow(y, 2) <= sqrt(2))
				return (true);
		}
	}
	return (false);
}
// 3-ой способ Ц только сложное логические выражени€
bool Resh3(float x, float y)
{
	return (x < 0 && pow(x, 2) + pow(y, 2) <= 1 && pow(x, 2) + pow(y, 2) <= sqrt(2));
}