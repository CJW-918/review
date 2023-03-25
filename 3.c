#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define SIZE 9

int DeleteKmulArray(int x[], int n, int k)
{
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (x[i] % k == 0) {
			for (int j = i; j < n - 1; j++)
				x[j] = x[j + 1];
			count += 1;
		}
	}

	return (n - count);
}
void PrintIntArray(int v[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", v[i]);
}
int main(void)
{
	int k, x[SIZE] = { 1, 3, 5, 7, 9, 2, 4, 6, 8 };
	int all_n;

	scanf("%d", &k);
	all_n = DeleteKmulArray(x, SIZE, k);
	PrintIntArray(x, all_n);

	return 0;
}