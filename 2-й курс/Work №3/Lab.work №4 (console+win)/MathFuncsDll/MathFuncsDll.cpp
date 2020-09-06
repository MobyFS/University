// MathFuncsDll.cpp: определяет экспортированные функции для приложения DLL.
//

#include "stdafx.h"
#include "MathFuncsDll.h"
#include <stdexcept>
#include <cmath>
using namespace std;

namespace MathFuncs
{

	double MyMathFuncs::fun(double a, double p)
	{
	    if (0 <= a && a <= 1) {
			p = -1;
			return p;
		}
		if (a > 1) {
			p = exp(a);
		return p;
	}
		if (a < 0) {
			p = 2 * a  - 1;
			return p;
		}
	}

}