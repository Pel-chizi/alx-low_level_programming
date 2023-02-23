#include <stdio.h>
/**
 * main - printing first 50 fibonacci numbers
 * Return: 0 success
 */
int main(void)
{
	int i = 0;
	int x = 1;
	int y = 2;

	while (i < 50)
	{
	if (i == 0)
	printf("%d", x);
	else if (i == 1)
	printf(", %d", y);
	else
	{
	y = y + x;
	x = y - x;
	printf(", %d", y);
	}
	++i;
	}
	printf("\n");
	return (0);
}
