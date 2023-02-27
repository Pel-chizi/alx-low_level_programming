#include "main.h"
/**
 * rev_string - shows the reverse of a string
 * @s: the string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int l = 0, i = 0;
	char new;

	while (s[i++])
		l++;

	for (i = l - 1; i >= l / 2; i--)
	{
		new = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = new;
	}
}
