#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int n, fn, f1, f2, f3;

    scanf("%d", &n);

    f1 = (n+5)*(n+10) < 0 ? (-(n+5)*(n+10)) : ((n+5)*(n+10));
    f2 = 2*n + 5 < 0 ? (-(2*n + 5)) : (2*n + 5);
    f3 = 3*n - 10 < 0 ? (-(3*n - 10)) : (3*n - 10);
    fn = f1 + f2 + f3;
    printf("%d\n", fn);

    return 0;
}