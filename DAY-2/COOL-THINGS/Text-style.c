#include <stdio.h>

int main()
{
    printf("\e[31;44;3m [clear] \e[0m \n");
    // Foreground color [31 - 37]
    // Background color [41 - 47]
    // Text decoration [1 - 9]
    return 0;
}