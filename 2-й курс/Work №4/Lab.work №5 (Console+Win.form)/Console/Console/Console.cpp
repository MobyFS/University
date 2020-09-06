// Console.cpp: определ€ет точку входа дл€ консольного приложени€.
//
#include "stdafx.h"
#include <iostream>
#include <cmath>
#include "MathFuncsDll.h"

using namespace std;
void fun(double, double, double,double);
int main()
{
	setlocale(LC_ALL, "");
	double eps;
	double x = 0;
	double x1 = cos(x);
	double a = 1;
	cout << "¬ведите точность вычислени€" << endl;
	cin >> eps;
	fun(x, a, eps,x1);
	system("pause");
	return 0;
}
void fun(double x,double a,double eps,double x1) 
{
	MathFuncs::MyMathFuncs::fun(a, eps, x);
	cout << " орень уравнени€ с заданной точностью = " << x << endl;
	cout << " орень уравнени€, вычисленный напр€мую = " << x1 << endl;
}