#include <stdio.h>

#define PI 3.141592

int main(void)
{
    // Area of a circle

    double radius = 0;
    printf("Enter radius: ");
    scanf("%lf", &radius);
    double area = PI * radius * radius;
    printf("Area: %f\n", area);
    
    return 0;
}