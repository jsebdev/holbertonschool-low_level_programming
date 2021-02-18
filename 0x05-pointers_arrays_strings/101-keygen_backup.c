#include "holberton.h"
#include <stdlib.h>
#include <time.h>

/**
 * checksum - check the sum
 * @s: password to check
 * Return: nothing
 */
void checksum(char *s)
{
	int sum = 0, i = 0;

	for (i = 0; *(s + i) != 0; i++)
	{
		sum += *(s + i);
	}
	printf("checksum = %d\n", sum);
}

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
	printf("%s", password);
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
		else if (*p > 32 + overload / 2)
		{
			*p = *p - overload / 2;
			if (overload % 2 == 0)
				overload = overload / 2;
			else
				overload = overload / 2 + 1;
		}
		else
			p = p - 1;
	}
	/* printf("%s ultimo caracter: %c en memoria:%p\n", password, *p, p); */
	return (0);
}
