#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define SIZE 10

int main(void) {
    char answer1;
    int answer2, seat[SIZE] = {0};
    
    while(1) {
        printf("좌석을 에약하시겠습니까?\n");
        scanf("%c", &answer1);

        if (answer1 == "n")
            break;

        printf("=====================");
        printf("1 2 3 4 5 6 7 8 9 10\n");
        printf("=====================");

        for(int i = 0; i < SIZE; i++) {
            printf("%d ", i);
        }
        printf("\n");

        printf("몇 번째 좌석을 예약하시겠습니까?");
        scanf("%d", &answer2);

        if (seat[answer2 - 1] == 0) {
            seat[answer2 - 1] = 1;
            printf("예약 성공");
        }
        else {
            printf("이미 예약된 자리입니다.");
        }

        return 0;
    }
    
} 