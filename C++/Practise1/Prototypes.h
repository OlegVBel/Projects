#pragma once
double Func1(double x);
double Func1_dfdx(double x);
double Func1_d2fdx2(double x);

double Func2(double x);
double Func2_dfdx(double x);
double Func2_d2fdx2(double x);

double Func3(double x);
double Func3_dfdx(double x);
double Func3_d2fdx2(double x);

double HC_Method(double (*functions)(double), double a, double b, double eps);

int Fib_Number(int number);
double Fibanachi(double(*func)(double), double a, double b, double eps);
double Golden_Section(double(*func)(double), double a, double b, double eps);
double Iteration(double(*func)(double), double b, double a, double eps);
double Newton(double(*func)(double), double(*dfdx)(double), double(*d2fdx2)(double), double b, double a,  double eps);
double FuncNull(double(*func)(double), double b, double a, double eps);
double Parabola(double(*func)(double), double b, double a, double eps);