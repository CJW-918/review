#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int width, height, n, m;
    double n_length, m_length, round, area;

    scanf("%d %d", &n, &m);
    width = 297;
    height = 210;
    n_length = width / (double)n;
    m_length = height / (double)m;
    round = (n_length + m_length) * 2;
    area = n_length * m_length;
    printf("%g %g", &round, &area);

    return 0;
}