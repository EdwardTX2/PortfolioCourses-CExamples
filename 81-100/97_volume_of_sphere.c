#include <stdio.h>

#define PI 3.141592653589

double sphere_volume(double radius);

int main(void)
{
    // Compute volume of sphere
    //
    // Volume of Sphere: (4/3) pie r cubed
    //
    // e.g. for r = 3 we expect Volume = 113.097

    printf("%f\n", sphere_volume(3));


    return 0;
}

double sphere_volume(double radius)
{


    return (4/3.0) * PI * (radius * radius * radius);
}