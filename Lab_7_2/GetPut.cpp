// Файл GetPut.cpp с функциями ввода и вывода
#include <iostream>
using namespace std;
// Определение функции ввода
void GetXZ(double& x, double& z)
{
	setlocale(LC_ALL, "rus");
	cout << " Введите x, z\n ";
	cin >> x >> z;
}
// Определение функции вывода
void PutRN(double R, int N)
{
	setlocale(LC_ALL, "rus");
	cout << " Ответ R= " << R << endl;
	cout << " Номер ветки разветвления " << N << endl;
}