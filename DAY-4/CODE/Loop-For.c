#include <stdio.h>

void print(int i) {
    printf("\e[37;44;1;4m %d \e[0m\n", i);
}

int main()
{
    for (int i = 0; i < 5; i++, print(i)) {}
    return 0;
}