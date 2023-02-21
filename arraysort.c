#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define SIZE 10


int main(void) {
    int list[SIZE] = {3, 2, 1, 4, 6, 5, 9, 8, 7};
    int temp, least, j;

    for(int i = 0; i < SIZE - 1; i++) {
        least = i;
        for(j = i + 1; j < SIZE; j++) {
            if(list[j] < list[least]) {
                least = j;
            }
        }
        temp = list[j];
        list[i] = list[least];
        list[least] = temp;
    }
    for(int i = 0; i < SIZE; i++) {
        printf("%d", list[i]);
    }
    printf("\n");
    
    return 0;
}