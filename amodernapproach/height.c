#include <stdio.h>

int main (void)
{
    int height1, height2, height3;
    float weight;

    height1 = 184;
    height2 = 186;
    weight = 122.2;
    height3 = (height1 + height2) / 2;
    printf("%d \n", height3);
    printf("The weight is: %.4f and a height of %d", weight, height1);
    return 0;

}
