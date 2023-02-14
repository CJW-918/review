#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int number, number_100, number_10, number_1; 
	//number_100, number_10, number_1 : ���� 100�� �ڸ�, 10�� �ڸ�, 1�� �ڸ� ���ڸ� �ǹ� 

	scanf("%d", &number);
	number_100 = number / 100;
	number_10 = number % 100 /10;
	number_1 = number - (number_100 * 100) - (number_10*10);
	printf("%d %d %d\n", number_100, number_10, number_1);

	return 0;
}