#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) 
{
    int num[5], low_Anum = 0, low_Anum2 = 1;

    for (int i = 0; i < 5; i++) {
        printf("%d번째 숫자 : ", i);
        scanf("%d", num[i]);
        if (num[i] < num[low_Anum]) {
            low_Anum2 = low_Anum;
            low_Anum = i;
        }
        else if (num[i] < num[low_Anum2]) {
            low_Anum2 = i;
        }
    }
    printf("두 번째로 낮은 값은 num[%d]의 %d입니다.", low_Anum2, num[low_Anum2]);

    return 0;
}