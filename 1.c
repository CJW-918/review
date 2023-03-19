#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define SIZE 101

int main(void)
{
	int natural_num[SIZE] = { 0 }, input_num;

	while (1) {
		scanf("%d", &input_num);
		if (input_num == 0)
			break;
		natural_num[input_num] += 1;
	}

	for (int i = 0; i < SIZE; i++) {
		if (natural_num[i] >= 1)
			printf("%d:%d ", i, natural_num[i]);
	}

	return 0;
}