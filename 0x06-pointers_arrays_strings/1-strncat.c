#include "main.h"
/**
 * _strncat - concatinating two strings using n number of bytes
 * from the src string
 * @dest: the destination string
 * @src: the string to append
 * @n: the number of bytes to be appended to dest from src
 * Return: a pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, d_len = 0;

	while (dest[i++])
	{
		d_len++;
	}

	for (i = 0; src[i] && i < n; i++)
	{
		dest[d_len++] = src[i];
	}
	return (dest);
}
