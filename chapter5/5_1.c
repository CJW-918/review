#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int won, dollars, cent;
    double rate;

    scanf("%d%lf", &won, &rate);
    dollars = (int)(won / rate);
    cent = won - (dollars * rate);
    printf("%d달러 %d센트", dollars, cent);

    return 0;
}