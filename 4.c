#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define SIZE 5

void GetIntArray(int v[], int n)
{
	for (int i = 0; i < n; i++)
		scanf("%d", &v[i]);

	return v;
}
int Trim(int x[], int n)
{
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n ; j++) {
			if (x[i] == x[j]) {
				for (int k = j; k < n; k++)
					x[k] = x[k + 1];
				n -= 1;
				j -= 1;
			}
		}
	}

	return n;
}
int main(void)
{
	int int_num[SIZE], length_array;

	GetIntArray(int_num, SIZE);
	length_array = Trim(int_num, SIZE);

	for (int i = 0; i < length_array; i++)
		printf("%d ", int_num[i]);

	return 0;
}