// Лаб.работа №2(1) (console).cpp: главный файл проекта.

#include "stdafx.h"
#include <iostream>
#include <math.h>

using namespace std;

float func(float, float, float); // прототип функции
int main()
{
	float x, y, c;
	float rez;
	cout << "Vvedite chislo x \n";
	cin >> x;
	cout << "Vvedite chislo y \n";
	cin >> y;
	cout << "Vvedite chislo c \n";
	cin >> c;
	rez = func(x, y, c);
	cout << "Rezul'tat \n" << rez << endl;
	system("pause");
	return 0;
}

float func(float x, float y, float c) {
	float max = 0, min = 0;
	float a, b, d;

	if (y >= 0)
	{
		a = x;
		if (y*y > x)
			a = y * y;
		b = sqrt(x);
		d = sqrt(y + c);

		min = a; 
		if (min > b) {
			min = b;
			if (min > d)
				min = d;
		}
		else { 
			if (min > d)
				min = d;
		}
		return min;
	}
	else {
		a = sin(x);
		b = cos(y);
		d = tan(x*y);

		max = a; 
		if (max < b) {
			max = b;
			if (max < d)
				max = d;
		}
		else { 
			if (max < d)
				max = d;
		}
		return max;
	}
}