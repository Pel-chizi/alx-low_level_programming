#include "main.h"
#include <stdio.h>

int is_prime(int n, int i);
/**
 * is_prime_number - returns the answer for if a number is prime or not
 * @n: the number
 * Return: the answer 0 for not prime and 1 for prime
 */
int is_prime_number(int n)
{
	return (is_prime(n, 1));
}
/**
 * is_prime - checks if a number is prime
 * @n: the number
 * @i: iteration
 * Return: 1 for prime, 0 for non-prime
 */
int is_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	if ((n / i) < i)
	{
		return (1);
	}
	return (is_prime(n, i + 1));
}
