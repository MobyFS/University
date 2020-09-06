// MathFuncsDll.cpp: определяет экспортированные функции для приложения DLL.
//

#include "stdafx.h"
#include "MathFuncsDll.h"
#include <stdexcept>
#include <cmath>
using namespace std;

namespace MathFuncs
{

	double MyMathFuncs::fun(double x)
	{
		return x*x*sin(x) + 2 * cos(x);
	}

}

