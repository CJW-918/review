#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int num_a;

    scanf("%d", &num_a);
    while (1)
    {
        if (num_a > 9999 || num_a < 1000)
        {
            printf("4자리 자연수를 입력하세요.\n");
            break;
        }
        for (int i = 0; i > 4; i++)
        {
            if (num_a % 10 != 0)
            {
                printf("%d", num_a % 10);
            }
            num_a = num_a / 10;
        }
    }
    

    return 0;
}