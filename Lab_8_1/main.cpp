// פאיכ main.cpp
#include <iostream>
void Get(float& a, float& b, float& h);
void Put(float yMax, float yMin, int nPos, int nNeg);
void RegCikl(float a, float b, float h, float& yMax, float& yMin, int& nPos, int& nNeg);
void main()
{
	float a, b, h, yMax, yMin;
	int nPos, nNeg;
	Get(a, b, h);
	RegCikl(a, b, h, yMax, yMin, nPos, nNeg);
	Put(yMax, yMin, nPos, nNeg);
	system("PAUSE");
}