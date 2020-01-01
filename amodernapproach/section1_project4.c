#include <stdio.h>

int main (void)
{
    float a;
    float new_a;

    printf("Enter the dollars-and-cents amount:\n");
    scanf("%f", &a);

    new_a = a * 1.05;

    printf("the new amount is: %f", new_a);



}
