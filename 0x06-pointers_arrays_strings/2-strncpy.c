#include "main.h"
/**
 * _strncpy - copies n number of bytes from src to dest
 * @dest: The buffer that stores the string copy
 * @src: the source string
 * @n: the number of bytes to be copied
 * Return: a pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, s_len = 0;

	while (src[i++])
	{
		s_len++;
	}

	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}

	for (i = s_len; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
