// Tabulirovanie.cpp: определ€ет точку входа дл€ консольного приложени€.
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
	cout << "¬ведите начальное значение:\n";
	cin >> a;
	cout << "¬ведите конечное значение:\n";
	cin >> b;
	cout << "¬ведите шаг:\n";
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
