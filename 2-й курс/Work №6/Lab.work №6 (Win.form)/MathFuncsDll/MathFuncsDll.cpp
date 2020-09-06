// MathFuncsDll.cpp: определяет экспортированные функции для приложения DLL.
//

#include "stdafx.h"
#include "MathFuncsDll.h"
#include <stdexcept>

using namespace std;

namespace MathFuncs
{
	void MyMathFuncs::memory_matrix(int col, int row, int **matrix)
	{
		for (int i = 0; i < row; i++) {
			//matrix[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				matrix[i][j] = rand() % 10;
			}
		}
	}
	void MyMathFuncs::array_simple(int *array_simple, int k)
	{
			for (int i = 0; i < k; i++)
			{
				array_simple[i];
			}
	}
}