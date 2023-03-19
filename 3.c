#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define SIZE 10

int main(void)
{
	int int_num[SIZE], big[SIZE], i = 0;

	while (1) {
		scanf("%d", &int_num[i]);
		if (int_num[i] == 0)
			break;
		i++;
	}

	for (int j = 0; j < i; j++) {
		big[j] = 1;
		for (int k = 0; k < SIZE; k++) {
			if (int_num[j] < int_num[k])
				big[j] += 1;
		}
	}
	for (int l = 0; l < i; l++)
		printf("%d ", big[l]);

	return 0;
}