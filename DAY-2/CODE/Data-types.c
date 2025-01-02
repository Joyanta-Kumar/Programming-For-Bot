#include <stdio.h>

int main()
{
    int roll_number = 54;
    float attendance = 0.73;    // 73% = 0.73
    double scholarship = 0.0000021;
    char group = 'M';


    printf(" \e[4mVariable      Value            Data type       Size\n\e[0m");   // "\n" for new line.
    printf("\e[32m Roll number\e[37m:\e[33m\t%d    \t\t\e[34mint   \t\t\e[37m%d B\n", roll_number, sizeof(int));     // "\t" for tab
    printf("\e[32m Attendance \e[37m:\e[33m\t%g %%   \t\e[34mfloat \t\t\e[37m%d B\n", attendance, sizeof(float));      // "%%" will show up once
    printf("\e[32m Scholarship\e[37m:\e[33m\t%.8lf $ \t\e[34mdouble\t\t\e[37m%d B\n", scholarship, sizeof(double));
    printf("\e[32m Group      \e[37m:\e[33m\t%c\t\t\e[34mchar      \t\e[37m%d B\n", group, sizeof(char));            // \" for "

    return 0;
}