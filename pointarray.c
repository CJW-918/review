#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
    char *string[] = {"Hello", "this", "is", "a", "test"}

    int length = sizeof(strings) / sizeof(char *);

    for (int i = 0; i < length; i++) {
        printf("%s ", string[i]);
    }

    return 0;
}