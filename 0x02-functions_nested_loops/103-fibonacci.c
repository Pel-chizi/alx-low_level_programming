#include  <stdio.h>
/**
 * main - sum of the even fibonacci values less than 4mil
 * Return: 0(success)
 */
int main(void)
{
	int i = 0;
	long x = 1, y = 2, sum = y;

	while (y + x < 4000000)
	{
	y = y + x;
	if (y % 2 == 0)
	sum = sum + y;
	x = y - x;
	++i;
	}
	printf("%ld\n", sum);
	return (0);
}
