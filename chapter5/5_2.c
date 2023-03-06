#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int m;
    double cm, total_cm, inch, feet, yard;

    scanf("%d%lf", &m, &cm);
    total_cm = m * 100 + cm;
    inch = total_cm * 2.54;
    feet = inch / 12;
    yard = feet / 3;
    printf("%lf %lf %lf\n", inch, feet, yard);

    return 0;
}