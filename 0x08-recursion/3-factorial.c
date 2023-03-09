#include "main.h"
/**
 * factorial - prints the factorial of some integers
 * @n: the integer
 * Return: the factorial value
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
