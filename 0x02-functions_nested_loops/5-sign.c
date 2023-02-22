#include "main.h"
/**
 * print_sign - prints a sign for whatever xter
 * @n: the checked xter
 * Return: 1 (positive numbers), -1 (negative numbers) and 0 (anyother xter)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
