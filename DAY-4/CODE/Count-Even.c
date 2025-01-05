#include <stdio.h>

int main()
{
    int count = 0;
    for (int i = 0; i <= 20; i++, count += (i % 2 == 0) ? 1 : 0) {}
    printf("%d\n", count);
    return 0;
}