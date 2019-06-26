#include <stdio.h>
#include <stdlib.h>
int main()
{
float celsius, fahrenheit;
printf("\nEnter temperature in celsius: ");
scanf("%f", &celsius);
fahrenheit = (1.8) * celsius + 32;
printf("\n%f deg celsius is %f fahrenheit\n", celsius, fahrenheit);

}
