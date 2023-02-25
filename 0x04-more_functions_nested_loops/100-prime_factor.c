#include <stdio.h>
#include <math.h>

/**
 * main - displays the largest prime factor of 612852475143
 * Return: 0 correct
 */

int main(void)

{
	long x, lpf;
	long number = 612852475143;
	double square =sqrt(number);

	for (x = 1; x <= square; x++)
	{
	if (number % x == 0)
	{
	lpf = number / x;
	}
	}
	printf("%ld\n", lpf);
	return (0);
}
