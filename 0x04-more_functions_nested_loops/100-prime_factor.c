#include <stdio.h>
/**
 * main - finds the biggest primo in a number
 * Return: always 0
 */
int main(void)
{
	long  int n = 612852475143, i = 0;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n = n / i;
		}
	}
	printf("%ld\n", i);
	return (0);
}
