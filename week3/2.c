#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    double sp_rad, pi, surface_area, volume;

    scanf("%lf", &sp_rad);
    pi = 3.141592;
    surface_area = 4 * pi * sp_rad * sp_rad;
    volume = (4 / 3.0) * pi * sp_rad * sp_rad * sp_rad;
    printf("%g %g", &surface_area, &volume);

    return 0;
}