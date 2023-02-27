#include "main.h"
#include <stdio.h>
/**
 * print_array - printing specified number of array elements
 * @a: Array of numbers
 * @n: number of elements to be displayed
 * Return: the specified elements
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
