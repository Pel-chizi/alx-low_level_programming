#include <stdio.h>
/**
 * main - alphabets in reverse
 * Return: 0(correct)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
