#define _CRT_SECURE_NO_wARNINGS

#include <stdio.h>

int main(void)
{
    int x1, x2, y1, y2;
    double distance1, distance2;

    scanf("%d%d%d%d", &x1, &x2, &y1, &y2);
    distance1 = x1*x1 + y1*y1;
    distance2 = x2*x2 + y2*y2;
    if (distance1 > distance2)
    {
        printf("(%d, %d)", x1, y1);
    }
    else if (distance1 == distance2)
    {
        printf("%lf", y1 > y2 ? distance1 : distance2);
    }
    else
    {
        printf("(%d, %d)", x1, y1);
    }

    return 0;
}