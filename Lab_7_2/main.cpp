// ���� main1.cpp
#include <iostream>
using namespace std;
void GetXZ(double& x, double& z);
void PutRN(double, int);
double Razv(double x, double z, int& n);
double Razm(double x, double z, int& n);
int main()
{
	double x, z, r;
	int n; // ����� �����
	GetXZ(x, z); // ����� ������� ����� �������� ������
	int choice; // ������� ������ �������
	cout << " ����� �������� ������ ������?\n";
	cout << " 1 - � ���������� �������������� ";
	cout << " ��� �������������� ������� max � min \n ";
	cout << "2 - �� ������ ��������� minMy � maxMy \n ";
	cout << " ��� ��������� 1 ��� 2 ?\n ";
	cin >> choice;
	switch (choice)
	{
	case 1:
		r = Razv(x, z, n);
		break;
	case 2:
		r = Razm(x, z, n);
		break;
	default:
		cout << " �� ����� ���-�� �� ��! ";
		cout << endl;
		system("PAUSE");
		return 0;
	}
	PutRN(r, n); // ����� ������� ������ �����������
	system("PAUSE");
	return 0;
}