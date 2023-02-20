#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h> #rand 함수 사용하려면 stdlib.h 필요함.
#define SIZE 10

int main(void) {
    int price[SIZE] = {0}, minimum = 101;

    printf("=====================\n");
    printf("1 2 3 4 5 6 7 8 9 10\n");
    printf("=====================\n");
    for (int i = 1; i < SIZE; i++) {
        price[i] = (rand() % 100) + 1;
        printf("%-3d ", price[i]);
        if (price[i] < minimum) {
            minimum = price[i];
        }
    }

    printf("\n\n");
    printf("최소값은 %d입니다.\n", minimum);

    return 0;
}