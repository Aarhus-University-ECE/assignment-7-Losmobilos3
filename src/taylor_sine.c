#include "taylor_sine.h"
#include <stdio.h>

double fact(double n)
{
    double result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

double power(double r, int p)
{
    double result = 1;
    for (int i = 0; i < p; i++)
    {
        result *= r;
    }
    return result;
}

double taylor_sine(double x, int n)
{
    /* implement your function here */
    double result = 0;
    double posneg = 1;

    for (int i = 1; i < n * 2 + 1; i += 2)
    {
        //printf("pow: %lf \n", power(x, i));
        //printf("fact: %lf \n", fact(i));
        result += posneg * (power(x, i)/fact(i));
        posneg = -posneg;
        //printf("sin(x): %lf \n", result);
    }


    return result;
}
