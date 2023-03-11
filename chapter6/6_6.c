#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int num1, num2, num3, num4;
    int abs1, abs2, abs3, abs4;

    scanf("%d%d%d%d", &num1, &num2, &num3, &num4);

    abs1 = num1 < 0 ? (num1 = -num1) : (num1 = num1);
    abs2 = num2 < 0 ? (num2 = -num2) : (num2 = num2);
    abs3 = num3 < 0 ? (num3 = -num3) : (num3 = num3);
    abs4 = num4 < 0 ? (num4 = -num4) : (num4 = num4);

    if (abs1 == abs2 == abs3 == abs4)
    {
        printf("All Same\n");
    }
    else if (abs1 == abs2 == abs3 || abs1 == abs2 == abs4 || abs1 == abs3 == abs4 || abs2 == abs3 == abs4)
    {
        printf("Three Same\n");
    }
    else if (abs1 == abs2 || abs1 == abs3 || abs1 == abs4 || abs2 == abs3 || abs2 == abs4 || abs3 == abs4)
    {
        printf("Two Same\n");
    }
    else
    {
        printf("All different\n");
    }

    return 0;
}