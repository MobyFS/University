// MathFuncsDll.cpp: определяет экспортированные функции для приложения DLL.
//

#include "stdafx.h"
#include "MathFuncsDll.h"
#include <stdexcept>
#include <cmath>

using namespace std;

namespace MathFuncs
{

	void MyMathFuncs::fun(double a, double eps, double & x)
	{

		while (abs(x - a) > eps)
		{
			a = x;
			x = cos(a);
		}
	}
}