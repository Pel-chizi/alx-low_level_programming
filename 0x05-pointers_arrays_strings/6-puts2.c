#include "main.h"
/**
 * puts2 - prints the first xter of the string
 * and skips one and then prints the next
 * @str: the string to be processed
 * Return: void
 */
void puts2(char *str)
{
	int i, j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
