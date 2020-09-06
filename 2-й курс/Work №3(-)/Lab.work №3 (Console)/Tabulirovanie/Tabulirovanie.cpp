// Tabulirovanie.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include "MathFuncsDll.h"

using namespace std;

void tabulirovanie(double, double, double);
int main()
{
	setlocale(LC_ALL, "rus");
	float a, b, h;
	cout << "������� ��������� ��������:\n";
	cin >> a;
	cout << "������� �������� ��������:\n";
	cin >> b;
	cout << "������� ���:\n";
	cin >> h;
	tabulirovanie(a, b, h);
	system("pause");
    return 0;
}

 void tabulirovanie(double a, double b, double h) {
	double F;
	int n = (round((b - a) / h) + 1);
	for (int i = 1; i <= n; i++) {
		F = MathFuncs::MyMathFuncs::fun(a);
		cout << "x=" << a << "    f=" << F << endl;
		a = a + h;
	}
}
