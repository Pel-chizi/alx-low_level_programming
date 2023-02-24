#include "main.h"
/**
 * print_most_numbers - prints numberst 0 to 9, except 2 and 4
 * Return: resul
 */

void print_most_numbers(void)
{
	int a;

	for  (a = 0; a <= 9; a++)
	{
		if ( a == 2 && a == 4)
		{
			continue;
		}
		_putchar(a + '0');
	}
	_putchar('\n');
}
