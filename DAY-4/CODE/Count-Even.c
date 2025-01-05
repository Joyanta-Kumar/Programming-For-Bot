#include <stdio.h>

int main()
{
    int count = 0;

    for (int i = 0; i <= 20; i++)
    {
        if (i % 2 == 1)
        {
            count++;
        }
    }

    printf("%d\n", count);
    return 0; 
}