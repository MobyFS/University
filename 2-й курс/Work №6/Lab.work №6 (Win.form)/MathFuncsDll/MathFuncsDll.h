#pragma once
#ifdef MATHFUNCSDLL_EXPORTS
#define MATHFUNCSDLL_API __declspec(dllexport) 
#else
#define MATHFUNCSDLL_API __declspec(dllimport) 
#endif
namespace MathFuncs
{
	class MyMathFuncs
	{
	public:
		static MATHFUNCSDLL_API void memory_matrix(int col, int row, int **matrix);
		static MATHFUNCSDLL_API void array_simple(int *array_simple, int k);
	};
}