#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: the string
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
/**
 * compares - compares each xter of a string
 * @s: the string
 * @i1: iterator 1
 * @i2: iterator 2
 * Return: void
 */
int compares(char *s, int i1, int i2)
{
	if (*(s + i1) == *(s + i2))
	{
		if (i1 == i2 || i1 == i2 + 1)
		{
			return (1);
		}
		return (0 + compares(s, i1 + 1, i2 - 1));
	}
	return (0);
}
/**
 * is_palindrome - detects if a string is a palindrome
 * @s: the string
 * Return: palindrome(1), not(0)
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (compares(s, 0, _strlen_recursion(s) - 1));
}
