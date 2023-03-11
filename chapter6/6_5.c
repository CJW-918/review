#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    double num1, num2, num3, num4;
    double diff1, diff2, diff3, min, max;

    scanf("%lf%lf%lf%lf", &num1, &num2, &num3, &num4);
    diff1 = num4 - num1;
    diff2 = num4 - num2;
    diff3 = num4 - num3;

    diff1 < 0 ? (diff1 = -diff1) : (diff1 = diff1);
    diff2 < 0 ? (diff2 = -diff2) : (diff2 = diff2);
    diff3 < 0 ? (diff3 = -diff3) : (diff3 = diff3);

    diff1 < diff2 ? (max = diff1, min = diff2) : (max = diff2, min = diff1);
    max < diff3 ? (max = diff3) : (max = max);
    diff3 < min ? (min = diff3) : (min = min);

    printf("%lf %lf\n", max, min);

    return 0;
}