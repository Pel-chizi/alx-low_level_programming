#include "main.h"
/**
 * _isdigit - checks if the character is a digit
 * @a: the character to be checked
 * Return: 1 if it is a digit and 0 for anyother thing
 */
int _isdigit(int a)
{

	if (a >= 48 && a <= 57)
	{
		return (1);
	}
	return (0);
}
