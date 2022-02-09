#pragma once
double Func1(double x);
double Func2(double x);
double Func3(double x);

double LeftRectangle(double(*func)(double), double b, double a, double N);
double RightRectangle(double(*func)(double), double b, double a, double N);
double MiddleRectangle(double(*func)(double), double b, double a, double N);
double Trapeze(double(*func)(double), double b, double a, double N);
double Sympson(double(*func)(double), double b, double a, double N);