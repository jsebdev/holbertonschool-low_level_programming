#include <stdio.h>

/**
 * main - funciont is the funcion the program start's running
 * Return: the function always returns 0
 **/
int main(void)
{
	int i, u, w;

	for (i = 0; i <= 9; i++)
	{
		for (u = 0; u <= 9; u++)
		{
			for (w = 0; w <= 9; w++)
			{
				if (u > i && w > u)
				{
					putchar(i + '0');
					putchar(u + '0');
					putchar(w + '0');
					if (i != 7 || u != 8 || w != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
