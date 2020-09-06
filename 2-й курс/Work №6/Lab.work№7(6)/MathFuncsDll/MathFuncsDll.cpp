// MathFuncsDll.cpp: определяет экспортированные функции для приложения DLL.
//

#include "stdafx.h"
#include "MathFuncsDll.h"
#include <stdexcept>

using namespace std;

bool is_prime(int n)
{
	if ((n == 0) || (n == 1))
	{
		return false;
	}
	for (int i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}

namespace MathFuncs
{
	void MyMathFuncs::memory_arr(int n, int **arr, int m)
	{
		for (int i = 0; i < n; i++)
		{
			arr[i] = new int[m];
			for (int j = 0; j < m; j++)
			{
				arr[i][j] = rand() % 10;
			}
		}
	}
	void MyMathFuncs::memory_L(int n, int **arr, int m, int *L)
	{
		for (int i = 0; i < m; i++)
		{
			L[i] = 0;
			for (int j = 0; j < n; j++)
			{
				if (is_prime(arr[j][i]))
				{
					L[i]++;
				}
			}
		}
	}
	
}
