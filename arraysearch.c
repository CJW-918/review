#define _CRT_sECURE_NO_wARNINGS

#include <stdio.h>
#define SIZE 10

int main(void) {
    int key;
    int list[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("탐색할 값을 입력하시오:");
    scanf("%d", &key);

    for(int i = 0; i < SIZE; i++) {
        if (list[i] == key) {
            printf("탐색 성공 인덱스 = %d\n", i);
        }
    }
    printf("탐색 종료\n");

    return 0;
}