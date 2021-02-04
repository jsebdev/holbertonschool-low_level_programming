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
			putchar(i + '0');
			putchar(u + '0');
			if (i != 9 || u != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
