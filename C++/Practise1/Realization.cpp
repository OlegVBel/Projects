using namespace std;
#include "cmath"
#include "Prototypes.h"
//функції та їх похідні//
double Func1(double x)          {return 3 * cos(2 * x - 4);}
double Func1_dfdx(double x)     {return -6 * sin(2 * x - 4);}
double Func1_d2fdx2(double x)   {return -12*cos(2*x - 4);}

double Func2(double x)          {return x - log10(x);}
double Func2_dfdx(double x)     {return 1-1/x;}
double Func2_d2fdx2(double x)   {return 1/pow(x, 2);}

double Func3(double x)          {return 3 * x * x - 5 * x + 16;}
double Func3_dfdx(double x)     {return 6 * x - 5;}
double Func3_d2fdx2(double x)   {return 6;}
////////////////////////

//дотичних
double Newton(double(*func)(double), double(*dfdx)(double), double(*d2fdx2)(double), double b, double a, double eps)
{
    double dx;
    do
    {
        b = a - dfdx(a) / d2fdx2(a);
        dx = abs(b - a);
        a = b;
    } while (dx > eps);
    return b;
}
//ділення відрізку навпіл
double HC_Method(double (*func)(double), double b, double a, double eps)
{
    double c = (a + b) / 2, L, res, x1, x2;
    while (1)
    {
        L = b - a;
        if (abs(L) < eps)
        {
            res = x1;
            break;
        }
        x1 = a + L / 4;
        x2 = b - L / 4;
        if (func(x1) < func(c))
        {
            b = c;
            c = x1;
        }
        else if (func(x2) < func(c))
        {
            a = c;
            c = x2;
        }
        else
        {
            a = x1;
            b = x2;
        }
    }
    return res;
}
//Фібоначчі
int Fib_Nums(int i)
{
    if (i == 0) return 0;
    if (i == 1) return 1;
    return Fib_Nums(i - 1) + Fib_Nums(i - 2);
}
double Fibanachi(double(*func)(double), double b, double a,  double eps) {
    double x1, x2, res, f1, f2;
    int iter = (b - a) / eps, k = 0, N = 0;
    double fib1(1), fib2(1), fib, f = (b - a) / eps;
    do{
        fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib;
        ++N;
    } while (fib1 < f);
    x1 = a + (double)Fib_Nums(N - 2) / Fib_Nums(N) * (b - a) - (N & 1 ? -1 : 1) * eps / Fib_Nums(N);
    x2 = a + (double)Fib_Nums(N - 1) / Fib_Nums(N) * (b - a) + (N & 1 ? -1 : 1) * eps / Fib_Nums(N);
    f1 = func(x1);
    f2 = func(x2);
    for (int i = 0; i < iter; i++) {
        ++k;
        if (f1 >= f2) {
            a = x1;
            x1 = x2;
            f1 = f2;
            x2 = a + (double)Fib_Nums(N - k - 1) / Fib_Nums(N - k) * (b - a) + ((N - k) & 1 ? -1 : 1) * eps / Fib_Nums(N - k);
            f2 = func(x2);
        }
        else {
            b = x2;
            x2 = x1;
            f2 = f1;
            x1 = a + (double)Fib_Nums(N - k - 2) / Fib_Nums(N - k) * (b - a) - ((N - k) & 1 ? -1 : 1) * eps / Fib_Nums(N - k);
            f1 = func(x1);
        }
        if (fabs(b - a) <= eps) {
            res = (a + b) / 2;
            break;
        }
    }
    return res;
}
//золотоий переріз
double Golden_Section(double(*func)(double), double b, double a,  double eps)
{
    double x1, x2 = 0;
    double alf = (1 + sqrt(5)) / 2;
    do
    {
        x1 = b - (b - a) / alf;
        x2 = a + (b - a) / alf;
        if (func(x1) >= func(x2))
            a = x1;
        else
            b = x2;
    } while (abs(b - a) > eps);
    return (a + b) / 2;
}
//перебор
double Iteration(double(*func)(double), double b, double a, double eps)
{
    double f = func(a), f_x, x;
    for (x = a; x < b; x += eps) {
        f_x = func(x);
        if (f_x < f) {
            a = x;
            f = f_x;
        }
    }
    return a;
}
//ламані
double Parabola(double(*func)(double), double b, double a, double eps)
{
    double h = 0.001;
    if (a == 0) a += 0.1;
    while ((func(a + h) - 2 * func(a) + func(a - h)) / (h * h) <= 0) a += 0.1;
    double x1;
    x1 = a - 0.5 * h * (func(a + h) - func(a - h)) / (func(a + h) - 2 * func(a) + func(a - h));
    while (abs(x1 - a) > eps) {
        a = x1;
        x1 = a - 0.5 * h * (func(a + h) - func(a - h)) / (func(a + h) - 2 * func(a) + func(a - h));
    }
    return x1;
}
//нуль функції 
double FuncNull(double(*func)(double), double b, double a, double eps)
    {
        double f_a = func(a);
        double f_b = func(b);
        int k = 0, max = 100000;
        double mid, f_mid;
        while (b - a > eps && k < max)
        {
            mid = (a + b) / 2;
            f_mid = func(mid);
            if (f_a * f_mid <= 0)
            {
                b = mid;
                f_b = f_mid;
            }
            else
            {
                a = mid;
                f_a = f_mid;
            }
            k++;
        }
        return (a + b) / 2;
    }