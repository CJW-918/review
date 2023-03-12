#define _CRT_SECURE_NO_WARNINS

#include <stdio.h>

int main(void)
{
    int num;

    int i = 1, third = 0;
    while (scnaf("%d", &num) == 0)
    {
        if (i == 1)
        {
            third = num;
        }
        third < num ? (third = third) : (third = num);
        i++;
    }

    return 0;
}