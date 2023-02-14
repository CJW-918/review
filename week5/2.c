#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int C_temperature;
	double F_temperature;

	scanf("%d", &C_temperature);
	F_temperature = (C_temperature * 9. / 5) + 32;
	printf("%g\n", F_temperature);

	return 0;
}