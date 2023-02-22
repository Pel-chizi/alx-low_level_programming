#include "main.h"
/**
 * print_alphabet_x10 - print lower case alphabets 10x
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int g = 0;

	while (g <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		g++;
	}
}
