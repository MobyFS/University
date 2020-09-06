// MathFuncsDll.cpp: определяет экспортированные функции для приложения DLL.
//

#include "stdafx.h"
#include "MathFuncsDll.h"
#include <stdexcept>

using namespace std;

namespace MathFuncs
{
	void MyMathFuncs::memory_arr(int num, int *arr, int x)
	{
		for (int i = 0; i < x; i++)
		{
			num = rand() % 10;
			arr[i] = num;
		}
	}
	void MyMathFuncs::memory_arr2(int num2, int *arr2, int y)
	{
		for (int i = 0; i < y; i++)
		{
			num2 = rand() % 10;
			arr2[i] = num2;
		}
	}
	void MyMathFuncs::memory_c(int pos, int *arr, int *arr2, int x, int *c)
	{
		for (int i = 0; i < pos; i++)
		{
			c[i] = arr[i];
		}

		for (int i = x; i < pos; i++)
		{
			c[i] = arr2[i - x];
		}
	}
	void MyMathFuncs::memory_z(int pos, int *arr, int *arr2, int start, int finish, int *z,int p)
	{
		for (int i = 0; i < pos; i++)
		{
			if ((i >= start) && (i < finish))
			{
				z[i] = arr2[i - start];
			}
			else if (i < start)
			{
				z[i] = arr[i];
			}
			else if (i >= finish)
			{
				z[i] = arr[i - finish + p];
			}
		}
	}
	
}