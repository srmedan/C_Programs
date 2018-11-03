#include <stdio.h>
#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void)
{
	float fahrenheit, celsius;

	printf("Introduceti temperatura in Fahrenheit: ");

	scanf("%f", &fahrenheit);
	
	celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

	printf("Temperatura in grade Celsius este: %.lf\n", celsius);

	return 0;


}
