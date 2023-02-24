#include "main.h"
/**
 * _isupper - checks for upper case
 * @x: the character to check
 * Return: 1 for upper case and 0 for anyother character
 */

int _isupper(int x)
{

	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
