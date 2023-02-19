#include <stdio.h>
/**
 * main - using putchar to print numbers
 * Return: 0(correct)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
