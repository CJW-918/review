#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int a, b, sum;

    scanf("%x %x", &a, &b);
    sum = a + b;
    printf("%d %x\n", &sum, &sum);

    return 0;
}