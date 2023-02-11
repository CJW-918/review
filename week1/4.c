#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int base, height, area;

    scanf("%d%d", &base, &height);
    area = base * height;
    printf("%d\n", &area);

    return 0;
}