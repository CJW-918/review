#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define STUDENTS 10

int main(void)
{
	int score[STUDENTS], grade[STUDENTS], order;

	for (int i = 0; i < STUDENTS; i++)
		scanf("%d", &score[i]);

	for (int j = 0; j < STUDENTS; j++) {
		grade[j] = 1;
		for (int k = 0; k < STUDENTS; k++) {
			if (score[j] < score[k])
				grade[j] += 1;
		}
	}
	for (int l = 0; l < STUDENTS; l++)
		printf("%d ", grade[l]);

	return 0;
}