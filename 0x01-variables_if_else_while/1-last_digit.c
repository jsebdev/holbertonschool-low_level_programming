#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>

/**
 * main - funciont is the funcion the program start's running
 * Return: the function always returns 0
 **/
int main(void)
{
	int n;
	double absres;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	absres = fabs(n % 10);
	printf("Last digit of %d is %g and is ", n, absres);
	if (absres > 5)
	{
		printf("greater than 5\n");
	}
	else
	{
		if (absres == 0)
		{
			printf("0\n");
		}
		else
		{
			printf("less than 6 and not 0\n");
		}
	}
	return (0);
}
