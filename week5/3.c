#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double sol_cct_1, sol_w_1, sol_saltw_1;
	double sol_cct_2, sol_w_2, sol_saltw_2, mixture_cct;

	scanf("%lf%lf", &sol_cct_1, &sol_w_1);
	scanf("%lf%lf", &sol_cct_2, &sol_w_2);
	sol_saltw_1 = (sol_cct_1 / 100) * sol_w_1;
	sol_saltw_2 = (sol_cct_2 / 100) * sol_w_2;
	mixture_cct = (sol_saltw_1 + sol_saltw_2) / (sol_w_1 + sol_w_2) * 100;
	printf("%.2lf\n", mixture_cct);

	return 0;
}