// Lab.rabota3.cpp: определяет точку входа для консольного приложения.
//

#include "MathFuncsDll.h"
#include "stdafx.h" 
#include <iostream> 
using namespace std;

void tab(double, double, double,double&);

int main()
{
	double a, b, h, p;
	cout << "Enter value a " << endl;
	cin >> a;
	cout << "Enter value b " << endl;
	cin >> b;
	cout << "Enter step h "<<endl;
	cin >> h;
	cout << "\nThe result of the program :\n" << endl;
	tab(a, b, h, p);
	system("pause");
	return 0;
}
	void tab(double a, double b, double h, double &p)
	{
		double n, Y;
		n = (round((b - a) / h) + 1);
		for (int i = 0; i < n; i++) {
			Y = MathFuncs::MyMathFuncs::fun(a,p);
			cout << fixed;
			cout << "x = " << a << "          Y = " << Y << cout.precision(1) << endl;
			a = a + h ;
		}
}
