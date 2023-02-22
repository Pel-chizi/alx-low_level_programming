#include "main.h"
/**
 * _islower - checking for lower case
 * @c: looking for "c"
 * Return: 1 for lowercase "c" and 0 for anyother thing
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
