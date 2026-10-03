#include <stdio.h>

int main(void)
{

    // Convert Celsius to Fahrenheit
    // Multiply by 1.8 (or 9/5) and add 32

    // 1. simple conversion
    
    // double C = 22.5;
    // double F = (C * 1.8) + 32;

    // printf("C: %.2lf -> F: %.2lf\n", C, F);


    // 2. User input

    // double C = 0;
    // double F = 0;

    // printf("Enter C temp: ");
    // scanf("%lf", &C);

    // F = (C * 1.8) + 32;

    // printf("C: %.2lf -> F: %.2lf\n", C, F);


    // 3. Conversion Table

    double C = 0;
    double start = 0;
    double end = 0;
    double step = 0;
    double F = 0;

    printf("Enter start C temp: ");
    scanf("%lf", &start);

    printf("Enter end C temp: ");
    scanf("%lf", &end);

    printf("Enter step value: ");
    scanf("%lf", &step);

    printf("    C        F\n");
    printf("   -----    -----\n");
    for (C = start; C <= end; C += step)
    {
        F = (C * 1.8) + 32;
        printf("%8.2lf %8.2lf\n", C, F);
    }

    return 0;
}