#define _CRT_NO_SECURE_WARNINGS

#include <stdio.h>

int main(void)
{
    double x, result;

    scanf("%lf", &x);
    result = 7*x*x - 9*x + 3;
    printf("%.1lf\n", &result);

    return 0;
}