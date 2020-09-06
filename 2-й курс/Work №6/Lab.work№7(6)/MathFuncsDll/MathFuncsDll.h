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
		static MATHFUNCSDLL_API void memory_arr(int n, int **arr, int m);
		static MATHFUNCSDLL_API void memory_L(int n, int **arr, int m,int *L);
	};
}