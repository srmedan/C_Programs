#include <stdio.h>

int main (void)
{
    int height, length, width, volume, weight;

    printf("Please enter a height: \n");
    scanf("%d", &height);

    printf("Please enter a length: \n");
    scanf("%d", &length);

    printf("Please enter a width: \n");
    scanf("%d", &width);

    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Dimentions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimentional weight (pounds): %d\n", weight);

    return 0;



}
