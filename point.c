#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define SIZE 10


int main(void) {
    int num[SIZE];
    int *b = num;
    int sum = 0;

    for (int i = 0; i < SIZE; i++) {
        *b = i + 1;
        sum += *b;
    }
    printf("SUM = %d\n", sum);

    return 0;
}