#include <stdio.h>
#include <math.h>

int main (void)
{
    float r;
    float v;

    r = 10;

    v = 4.0/3.0 * M_PI * r * r * r;

    printf("The value of the sphere is: %f", v);

    return 0;

}


