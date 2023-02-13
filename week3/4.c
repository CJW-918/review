#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int meter, feet, yard;
    double inches, total_inches, cm;

    scanf("%d%lf", &meter, &cm);
    total_inches = (meter*100 + cm) / 2.54;
    yard = (int)total_inches / 3 / 12;
    feet = (total_inches - yard*36) / 12;
    inches = (double)(total_inches - 36*yard - 12*feet);
    printf("%d %d %g\n", &yard, &feet, &inches);

    return 0;
}