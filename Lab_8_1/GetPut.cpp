//���� GetPut.cpp � ��������� ����� � ������
#include <iostream>
using namespace std;
void Get(float& a, float& b, float& h)
{
	setlocale(LC_ALL, "rus");
	cout << "������� ������ ������� �������: ";
	cin >> a;
	cout << "������� ������� ������� �������: ";
	cin >> b;
	cout << "������� ��� �������: ";
	cin >> h;
}
void Put(float yMax, float yMin, int nPos, int nNeg)
{
	setlocale(LC_ALL, "rus");
	cout << endl << "���������� �������� �������: " << yMax << endl;
	cout << "���������� �������� �������: " << yMin << endl;
	cout << "����� ������������� �������� �������: " << nPos << endl;
	cout << "����� ������������� �������� �������: " << nNeg << endl;
}