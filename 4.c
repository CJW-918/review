#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define DEGREE 21

double nsquare(double x, int degree)
{
	double squares = 1;
	int m;

	if (degree == 0)
		return squares;
	for (m = 0; m < degree; m++)
		squares = squares * x;
	
	return squares;
}
int main(void)
{
	int arr_size, n;
	double arr[DEGREE], input_x;
	double value = 0;

	scanf("%d", &n);
	for (int i = 0; i < n + 1; i++)
		scanf("%lf", &arr[i]);
	scanf("%lf", &input_x);

	for (int j = 0; j < n + 1; j++)
		value += arr[j] * nsquare(input_x, n - j);
	printf("%g\n", value);

	return 0;
}