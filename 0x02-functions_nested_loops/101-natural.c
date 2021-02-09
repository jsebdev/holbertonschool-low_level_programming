#include <stdio.h>
#include <string.h>

/**
 * main - main function to print the sum of some numbers
 * Return: retunr always zero
 */

int main(void)
{
	int i = 0, suma = 0;

	for (; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			suma = suma + i;
		}
	}
	printf("%d\n", suma);
	return (0);
}
