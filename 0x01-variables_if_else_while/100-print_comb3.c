#include <stdio.h>

/**
 * main - funciont is the funcion the program start's running
 * Return: the function always returns 0
 **/
int main(void)
{
	int i, u;

	for (i = 0; i <= 9; i++)
	{
		for (u = 0; u <= 9; u++)
		{
			if (u > i)
			{
				putchar(i + '0');
				putchar(u + '0');
				if (i != 8 || u != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
