#include <stdio.h>
#include <string.h>

/**
 * main - main function to print the sum of some fibonnacci numbers
 * Return: retunr always zero
 */
int main(void)
{
	int i = 3;
	long int num = 2, num1 = 1, aux;

	printf("1, 2, ");
	while (i <= 50)
	{
		aux = num;
		num = num + num1;
		num1 = aux;
		i++;
		printf("%ld", num);
		if (i != 51)
			printf(", ");
	}
	printf("\n");
	return (0);
}
