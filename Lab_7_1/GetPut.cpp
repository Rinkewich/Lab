// ���� GetPut.cpp � ��������� ����� � ������
#include <iostream>
using namespace std;
// ����������� ������� �����
void GetXY(float& x, float& y)
{
	setlocale(LC_ALL, "rus");
	cout << " ������� ���������� ����� x, y\n ";
	cin >> x >> y;
}
// ����������� ������� ������
void Put(bool b, float x, float y)
{
	setlocale(LC_ALL, "rus");
	cout << " ����� � ������������ ( " << x << " ," << y << " )" << endl;
	if (b) cout << "������ � �������� �������" << endl;
	else cout << "�� ������ � �������� �������" << endl;
}