#include "main.h"
#include <stdio.h>
/**
 * rot13 - encoddes alphabets by shifting by 13(rotate br 13)
 * @s: The string pointer
 * Return: the s
 */
char *rot13(char *s)
{
	int i;
	int j;
	char albets[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char alrot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == albets[j])
			{
				s[i] = alrot[j];
				break;
			}
		}
	}
	return (s);
}
