#include <stdio.h>
#include <string.h>

/**
 * main - main function to print the sum of some fibonacci numbers
 * Return: retunr always zero
 */
int main(void)
{
	int suma = 2;
	int num = 2, num1 = 1, aux;

	while (num < 4000000)
	{
		aux = num;
		num = num + num1;
		num1 = aux;
		if (num % 2 == 0)
			suma = suma + num;
	}
	printf("%d\n", suma);
	return (0);
}
