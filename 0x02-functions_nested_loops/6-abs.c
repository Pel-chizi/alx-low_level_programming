#include "main.h"
/**
 * _abs - gives absolute value of a number
 * @c: the checked
 * Return: Abs or 0
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_value;

		abs_value = c * -1;
		return (abs_value);
	}
	return (c);
}
