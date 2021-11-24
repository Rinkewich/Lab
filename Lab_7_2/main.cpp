// Файл main1.cpp
#include <iostream>
using namespace std;
void GetXZ(double& x, double& z);
void PutRN(double, int);
double Razv(double x, double z, int& n);
double Razm(double x, double z, int& n);
int main()
{
	double x, z, r;
	int n; // Номер ветки
	GetXZ(x, z); // Вызов функции ввода исходных данных
	int choice; // Вариант выбора решения
	cout << " Каким способом решать задачу?\n";
	cout << " 1 - с вложенными разветвлениями ";
	cout << " без дополнительных функций max и min \n ";
	cout << "2 - со своими функциями minMy и maxMy \n ";
	cout << " Что выбираете 1 или 2 ?\n ";
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
		cout << " Вы ввели что-то не то! ";
		cout << endl;
		system("PAUSE");
		return 0;
	}
	PutRN(r, n); // Вызов функции вывода результатов
	system("PAUSE");
	return 0;
}