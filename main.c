#include <stdio.h>

/*print Fahrenheit-Celsius table
	for fahr = 0, 20, ..., 300; floating-point version */
int main (void)
{
	int fahr;

	//print header
	printf("Fahrenheit\tCelsius\n");

	for (fahr = 300; fahr  >= 0; fahr -= 20)
	{
		printf ("%3d\t\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
	}

	return 0;
}