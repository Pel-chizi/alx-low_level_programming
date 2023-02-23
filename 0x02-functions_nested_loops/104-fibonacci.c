#include <stdio.h>
/**
 * main - first 98 fibonacci sequence
 * Return: 0(success)
 */
int main(void)
{
	int i;
	unsigned long fib1 = 0, fib2 = 1, sum;
	unsigned long fib1_part1, fib1_part2, fib2_part1, fib2_part2;
	unsigned long part1, part2;

	for (i = 0; i < 92; i++)
	{
		sum = fib1 + fib2;
		printf("%lu, ", sum);
		fib1 = fib2;
		fib2 = sum;
	}
	fib1_part1 = fib1 / 10000000000;
	fib2_part1 = fib2 / 10000000000;
	fib1_part2 = fib1 % 10000000000;
	fib2_part2 = fib2 % 10000000000;
	for (i = 93; i < 99; i++)
	{
		part1 = fib1_part1 + fib2_part1;
		part2 = fib1_part2 + fib2_part2;
		if (fib1_part2 + fib2_part2 > 9999999999)
		{
			part1 += 1;
			part2 %= 10000000000;
		}
		printf("%lu%lu", part1, part2);
		if (i != 98)
			printf(", ");
		fib1_part1 = fib2_part1;
		fib1_part2 = fib2_part2;
		fib2_part1 = part1;
		fib2_part2 = part2;
	}
	printf("\n");
	return (0);
}
