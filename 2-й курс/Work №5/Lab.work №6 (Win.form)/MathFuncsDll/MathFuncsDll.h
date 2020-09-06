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
		static MATHFUNCSDLL_API void memory_arr(int num, int *arr, int x);
		static MATHFUNCSDLL_API void memory_arr2(int num2, int *arr2, int y);
		static MATHFUNCSDLL_API void memory_c(int pos, int *arr ,int *arr2, int x,int *c);
		static MATHFUNCSDLL_API void memory_z(int pos, int *arr, int *arr2, int start, int finish, int *z, int p);
	};
}