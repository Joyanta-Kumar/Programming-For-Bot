#include <stdio.h>

int main() {
    // Data type
    // Precision
    // C -> F *
    float temp_cel;

    printf("Celsius (float): ");
    scanf("%f", &temp_cel);

    float temp_far;

    temp_far = (1.8 * temp_cel) + 32;
    printf("Temp (F): %g", temp_far);

    return 0;
}