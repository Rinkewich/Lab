// ���� main.cpp
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
	bool b, c, d; // ������� ��������� � �������� �������
	GetXY(x, y); // ����� ������� ����� �������� ������
	cout << " ������� 1-� �������:" << endl;
	b = Resh1(x, y); // ����� 1-� ������� �������
	Put(b, x, y); // ����� ������� ������ �����������
	cout << " \n������� 2-� �������:" << endl;
	c = Resh2(x, y); // ����� 2-� �-��� �������
	Put(c, x, y);
	cout << "\n ������� 3-� �������:" << endl;
	d = Resh3(x, y); // ����� 3-� �-��� �������
	Put(d, x, y);
	system("PAUSE");
	return 0;
}