#include <stdio.h>
/**
 * main - sum of all multiples of 3 and 5 excluding 1024
 * Return: 0 correct
 */
int main(void)
{
	int i;
	int sum = 0;

	while (i < 1024)
	{
		if  ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
