using namespace std;
#include "cmath"
#include "Prototypes.h"

double Func1(double x) { return 3 * cos(2 * x - 4); }
double Func2(double x) { return x - log10(x); }
double Func3(double x) { return 3 * x * x - 5 * x + 16; }

double LeftRectangle(double(*func)(double), double b, double a, double N) 
{
	double h = (b - a) / N, sum = 0;
	for (int i = 0; i <= N-1; i++)
	{
		sum += h * func(a + i * h);
	}
	return sum;
}
double RightRectangle(double(*func)(double), double b, double a, double N) 
{
	double h = (b - a) / N, sum = 0;
	for (int i = 1; i <= N; i++)
	{
		sum += h * func(a + i * h);
	}
	return sum;
}
double MiddleRectangle(double(*func)(double), double b, double a, double N) 
{
	double h = (b - a) / N, sum = 0;
	for (int i = 0; i <= N-1; i++)
	{
		sum += h * func(a + i * h + h/2);
	}
	return sum;
}
double Trapeze(double(*func)(double), double b, double a, double N)
{
	double h = (b - a) / N, sum = func(a) + func(b);
	for (int i = 1; i < N - 1; i++)
	{
		sum += 2 * func(a + i * h);
	}
	sum *= h / 2;
	return sum;
}
double Sympson(double(*func)(double), double b, double a, double N)
{
	double h = (b - a) / N, sum = func(a) + func(b);
	int k;
	for (int i = 1; i < N - 1; i++)
	{
		k = 2 + 2 * (i % 2);
		sum += k * func(a + i * h);
	}
	sum *= h / 3;
	return sum;
}