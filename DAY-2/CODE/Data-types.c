#include <stdio.h>

int main()
{
    int roll_number = 54;
    float attendance = 0.73;    // 73% = 0.73
    double scholarship = 0.000001;
    char group = 'M';

    printf("\n");   // "\n" for new line.
    printf("\e[44;1m Roll number:    %d         \e[0m\n", roll_number);    // "\t" for tab.
    printf("\e[44;1m Attendance :    %f %% \e[0m\n", attendance);   // "%%" will show up once.
    printf("\e[44;1m Scholarship:    %lf $ \e[0m\n", scholarship);
    printf("\e[44;1m Group      :    \"%c\"        \e[0m\n", group);          // \" for ".

    return 0;
}