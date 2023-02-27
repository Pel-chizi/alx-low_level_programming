#include "main.h"
/**
 * _puts - printing a string followed by a new line
 * @str: the string to be printed
 * Return: the string
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
