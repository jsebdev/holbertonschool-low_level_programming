#include <stdio.h>

/**
 * main - funciont is the funcion the program start's running
 * Return: the function always returns 0
 **/
int main(void)
{
	int x1, x2, y1, y2, counter = 0;

	for (x1 = 0; x1 <= 9; x1++)
	{
		for (x2 = 0; x2 <= 9; x2++)
		{
			for (y1 = 0; y1 <= 9; y1++)
			{
				for (y2 = 0; y2 <= 9; y2++)
				{
					counter++;
					if (y1 > x1 || (y1 == x1 && y2 > x2))
					{
						putchar(x1 + '0');
						putchar(x2 + '0');
						putchar(' ');
						putchar(y1 + '0');
						putchar(y2 + '0');
						if ((x1 != 9 ||  x2 != 8) ||
						    (y1 != 9 || y2 != 9))
						{
							putchar(',');
							putchar(' ');
						}
					}

				}
			}
		}
	}
	printf("Ciclos: %d\n", counter);

	putchar('\n');
	return (0);
}
