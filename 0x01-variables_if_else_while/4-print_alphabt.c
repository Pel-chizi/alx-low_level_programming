#include <stdio.h>
/**
 * main - a program that prints all alphabets except e and q
 * Return: 0(correct)
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l != 'e' && l != 'q')
			putchar(l);
	}
	putchar('\n');
	return (0);
}
