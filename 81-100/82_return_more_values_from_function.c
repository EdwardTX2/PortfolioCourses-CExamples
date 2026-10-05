#include <stdio.h>

void rect(int length, int width, int *area, int *perimeter);

int main()
{
    // Return multiple values
    // from a function

    int area_result = 0;
    int perimeter_result = 0;

    rect(10,5, &area_result, &perimeter_result);

    printf("area: %d\n", area_result);
    printf("perimeter: %d\n", perimeter_result);

    return 0;
}

void rect(int length, int width, int *area, int *perimeter)
{
    *area = length * width;
    *perimeter = 2 * (length + width);
}