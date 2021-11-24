//Τΰιλ main.cpp
#include <iostream>
#include <cmath>

using namespace std;
void GetCorner(double& C, double& a, double& b);
void PutAB(double A, double B);
void SizeY(double& y, double a, double b);
void CalcS(double& X, double C, double y, double x);
void AB(double C, double a, double b, double& A, double& B);

int main(void)
{
	setlocale(LC_ALL, "ru");
	double A, B, C, b, a;
	GetCorner(C, a, b);
	AB(C, a, b, A, B);
	PutAB(A, B);
	return(0);
}