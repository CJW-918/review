#define _CRT_NO_SECURE_WARNINGS

#include <stdio.h>

int main(void)
{
    char a;

    scanf("%c", &a);
    printf("ASCII code of %c : %d\n", &a, &a);

    return 0;
}