#include "main.h"
/**
 * _pow_recursion -  raises an integer to a specific power
 * @x: the base integer
 * @y: the exponent integer
 * Return: the resulting value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
