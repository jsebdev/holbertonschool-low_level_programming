#include <stdio.h>

/**
 * main - buzzfizz test
 * Return: Always returns 0
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
				printf("FizzBuzz");
			else
				printf("Fizz");
		}
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");
		i++;
	}
	printf("\n");
	return (0);
}
