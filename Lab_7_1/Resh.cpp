// ���� � ��������� ������� ������, ����������� �������������� ���������
#include <cmath>
// 1-�� ������ � ����������� ������������ � ����������� ����������
bool Resh1(float x, float y)
{
	if (x < 0 && pow(x, 2) + pow(y, 2) <= 1 &&
		pow(x, 2) + pow(y, 2) <= sqrt(2))
		return (true);
	else
		return (false);
}
// 2-�� ������ � ��������� ������������ ������ � ������� �������� ���������
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
// 3-�� ������ � ������ ������� ���������� ���������
bool Resh3(float x, float y)
{
	return (x < 0 && pow(x, 2) + pow(y, 2) <= 1 && pow(x, 2) + pow(y, 2) <= sqrt(2));
}