#include "main.h"
/**
 * more_numbers - prints 0 to 14, 10x
 * Return: the result
 */

void more_numbers(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y  = 0; y <= 14; y++)
		{
			if (y > 9)
			{
				_putchar((y  / 10) + '0');
			}
			_putchar((y % 10) + '0');
		}
		_putchar('\n');
	}
}
