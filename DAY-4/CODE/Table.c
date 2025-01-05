#include <stdio.h>

int main()
{
    int n = 4;
    for (int k = 1; k <= 10; k++)
    {
        for (int i = 1; i <= 10; i++)
        {
            printf("%d * %d  = %d\n", k, i, i*k);
        }
        printf("\n");
    }
    return 0;
}