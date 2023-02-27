#include "main.h"
/**
 * _strlen - displays the length of the string
 * @s: the string to be checked
 * Return: the string length
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s++)
		l++;
	return (l);
}
