#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: the string in question
 * Return: the half string
 */
void puts_half(char *str)
{
	int i = 0, n;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 1)
	{
		n = (i - 1) / 2;
		n += 1;
	}
	else
	{
		n = i / 2;
	}

	for (; n < i; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
