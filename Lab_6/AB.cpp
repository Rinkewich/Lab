//Τΰιλ AB.cpp
void SizeY(double& y, double a, double b);
void CalcS(double& X, double C, double y, double x);

void AB(double C, double a, double b, double& A, double& B)
{
	double y;
	SizeY(y, a, b);
	CalcS(A, C, y, a);
	CalcS(B, C, y, b);
}