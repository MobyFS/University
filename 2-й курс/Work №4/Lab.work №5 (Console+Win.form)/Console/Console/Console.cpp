// Console.cpp: ���������� ����� ����� ��� ����������� ����������.
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
	cout << "������� �������� ����������" << endl;
	cin >> eps;
	fun(x, a, eps,x1);
	system("pause");
	return 0;
}
void fun(double x,double a,double eps,double x1) 
{
	MathFuncs::MyMathFuncs::fun(a, eps, x);
	cout << "������ ��������� � �������� ��������� = " << x << endl;
	cout << "������ ���������, ����������� �������� = " << x1 << endl;
}