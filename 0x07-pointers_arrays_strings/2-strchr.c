#include <stdio.h>
#include "main.h"
/**
 * _strchr - locates and prints everything after the
 * first occurence of a character in a string
 * @s: the string to check
 * @c: the character to locate
 * Return: a pointer to c
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
