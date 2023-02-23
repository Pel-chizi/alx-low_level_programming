#include <stdio.h>
/**
 * main - printing first 50 fibonacci numbers
 * Return: 0 success
 */
int main(void)
{
	int i = 0;
	long x = 1;
	long y = 2;

	while (i < 50)
	{
	if (i == 0)
	printf("%ld", x);
	else if (i == 1)
	printf(", %ld", y);
	else
	{
	y = y + x;
	x = y - x;
	printf(", %ld", y);
	}
	++i;
	}
	printf("\n");
	return (0);
}
