#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void){
    int student[100];

    for (int i = 0; i < 100; i++) {
        printf("%d번 학생 점수 : ", i+1);
        scanf("%d", &student[i]);
    }

    return 0;
}