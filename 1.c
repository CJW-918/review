#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define MAXINPUTINT 10

double AvgArray(int x[], int n)
{
	double average;
	int sum = 0;

	for (int i = 0; i < n; i++) {
		sum += x[i];
	}
	average = (double)sum / n;

	return average;
}
int main(void)
{
	int int_num[MAXINPUTINT], n = 0;

	for (int i = 0; i < MAXINPUTINT; i++) {
		scanf("%d", &int_num[i]);
		if (int_num[i] == 0) {
			break;
		}
		n++;
	}
	printf("%g\n", AvgArray(int_num, n));

	return 0;
}