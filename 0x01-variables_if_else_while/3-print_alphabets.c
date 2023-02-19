#include <stdio.h>
/**
 * main - printing alphabets in lower n upper cases
 * Return: 0(success)
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	putchar(l);

	for (l = 'A'; l <= 'Z'; l++)
	putchar(l);
	putchar('\n');
	return (0);
}
