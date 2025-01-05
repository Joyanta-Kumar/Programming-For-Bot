#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 10;
    for (int j = 0; j < n; j++)
    {
        for (int i = -n; i <= n; i++)
        {
            printf((abs(i) == j || i == 0) ? "\e[32;1m*\e[0m" : " ");
        }
        printf("\n");
    }
    for (int i = 0; i <= n; i++) {
        printf("* ");
    }
    printf("\n");
    for (int j = n-1; j >= 0; j--)
    {
        for (int i = -n; i <= n; i++)
        {
            printf((abs(i) == j) || i == 0 ? "\e[1;33m*\e[0m" : " ");
        }
        printf("\n");
    }
    return 0;
}