#include "main.h"
/**
 * string_toupper - changes from lowercase to upper
 * @c: pointer, to the character
 * Return: c
 */
char *string_toupper(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] = c[i] - 32;
		}
		i++;
	}
	return (c);
}
