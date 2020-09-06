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
		static MATHFUNCSDLL_API double fun(double x);
	};
}