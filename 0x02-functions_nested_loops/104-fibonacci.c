#include <stdio.h>
/**
 * main - first 98 fibonacci sequence
 * Return: 0(success)
 */
int main(void)
{
	int i;
	int t1 = 1, t2 = 2;
	int nextTerm = t1 + t2;

	printf(" %d, %d, ", t1, t2);
	for (i = 3; i <= 98; ++i)
	{
		printf("%d, ", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	return (0);
}
