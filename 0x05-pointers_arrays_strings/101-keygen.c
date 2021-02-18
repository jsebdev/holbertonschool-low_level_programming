#include "holberton.h"
#include <stdlib.h>
#include <time.h>

/**
 * main - main function
 * Return: 0
 */
int main(void)
{
	int i = 0, sum = 0;
	char password[200] = {0};
	int new_caracter, overload;
	int random = rand();
	char *p;

	srand(time(0));
	do {
		random = rand();
		new_caracter = random % (126 - 32 + 1) + 32;
		/* printf("%d es %c\n", new_caracter, new_caracter); */
		password[i] = (char) new_caracter;
		sum += new_caracter;
		i++;
	} while (sum < 2772);

	overload = sum - 2772;
	p = &password[i - 1];
	/* printf("%s ultimo caracter: %c en memoria:%p\n", password, *p, p); */
	while (1)
	{
		if (*p > 32 + overload)
		{
			*p = *p - overload;
			break;
		}
		else
		{
			p = p - 1;
		}
	}
	/* printf("%s ultimo caracter: %c en memoria:%p\n", password, *p, p); */
	printf("%s", password);
	return (0);
}
