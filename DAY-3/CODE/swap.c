#include <stdio.h>

int main()
{
    int a = 2;
    int b = 5;
    int temp;
    printf("A: %d\n", a);
    printf("B: %d", b);
    temp = a;   // a = 2
    a = b;      // a = b = 5
    b = temp;   // b = temp = 2
    printf("\n\nA: %d\n", a);
    printf("B: %d", b);
    return 0;
}
