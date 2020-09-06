// Лаб.работа (консоль,С++).cpp: главный файл проекта.

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float a, b, x;
	float y, d;
	cout << "Vvedite chislo a\n";
	cin >> a;
	cout << "Vvedite chislo b\n";
	cin >> b;
	cout << "Vvedite chislo x\n";
	cin >> x;
	y = b*tan(x)*tan(x) - (a) / (sin(x / a)*sin(x / a));
	d = a*exp(-sqrt(a))*cos(b*x / a);
	cout << fixed;
		cout.precision(3);
	cout << "Znacenie y =" << y << endl;
	cout << "Znacenie d =" << d << endl;
	system("pause");
	return 0;
}
