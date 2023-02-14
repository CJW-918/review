#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int gasoline_G;
	double gasoline_L, vehicle_mile;

	scanf("%d", &gasoline_G);
	gasoline_L = gasoline_G*3.78;
	vehicle_mile = gasoline_L * 11.5 / 1.6;
	printf("%d\n", (int)(vehicle_mile+0.5));

	return 0;
}