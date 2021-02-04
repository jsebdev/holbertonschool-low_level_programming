#include <stdio.h>

/**
 * main - funciont is the funcion the program start's running
 * Return: the function always returns 0
 **/
int main(void)
{
	int x, y;

	for (x = 0; x <= 99; x++)
	{
		for (y = 0; y <= 99; y++)
		{
			if (y > x)
			{
				putchar(x + '0');
				putchar(y + '0');
				putchar(' ');
				if (x != 98 || y != 99)
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
