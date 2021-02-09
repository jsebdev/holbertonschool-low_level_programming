#include <stdio.h>

int main(void)
{
	unsigned int i = 3;
	unsigned long int num1 = 2, num2 = 1, aux, overload1 = 0, overload2 = 0,
		overaux, breaker = 1000000000000, lastfibo = 98;

	printf("1, 2, ");
	while (i <= lastfibo)
	{
		aux = num1;
		overaux = overload1;

		num1 = num1 + num2;
		overload1 = overload1 + overload2;
		overload1 = overload1 + num1 / breaker;
		num1 = num1 % breaker;

		num2 = aux;
		overload2 = overaux;
		if (overload1 != 0)
			printf("%lu%lu", overload1, num1);
		else
			printf("%lu", num1);

		if (i != lastfibo)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	return (0);
}
