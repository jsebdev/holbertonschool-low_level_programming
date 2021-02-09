#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - prints all the numbers from the parameter up to 98
 * @n: number to start printing with
 * Return: does not return anything
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}
	/* _putchar('\n'); */
	printf("\n");
}
