// ���� GetPut.cpp � ��������� ����� � ������
#include <iostream>
using namespace std;
// ����������� ������� �����
void GetXZ(double& x, double& z)
{
	setlocale(LC_ALL, "rus");
	cout << " ������� x, z\n ";
	cin >> x >> z;
}
// ����������� ������� ������
void PutRN(double R, int N)
{
	setlocale(LC_ALL, "rus");
	cout << " ����� R= " << R << endl;
	cout << " ����� ����� ������������ " << N << endl;
}