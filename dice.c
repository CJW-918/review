#include <stdio.h>
#include <stdlib.h>

#define SIZE 6
int main(void) {
    int freq[SIZE] = {0};
    
    for(int i = 0; i < 10000; i++) {
        ++freq[rand() % 6];
    }
    printf("================");
    printf("면 빈도\n");
    printf("================");
    for(int i = 0; i < SIZE; i++) {
        printf("%d %d", i, freq[i]);
    }

    return 0;
}