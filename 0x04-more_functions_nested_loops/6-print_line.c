#include "main.h"
/**
 * print_line - draws a straight line, based on given length
 * @n: given length
 * Return: the lines
 */

void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		_puttchar('\n');
	}
	else
	{
		for (x = 0; x < n; n++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
