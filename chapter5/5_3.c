#define _CRT_SECURE_NO_wARNINGS

#include <stdio.h>

int main(void)
{
    int a, b, abs_a, abs_b;
    double average, abs_average;

    scanf("%d%d", &a, &b);
    a < 0 ? (abs_a = -a) : (abs_a = a);
    b < 0 ? (abs_b = -b) : (abs_b = b);

    average = (a + b) / 2.0;
    abs_average = (abs_a + abs_b) / 2.0;

    return 0;
}