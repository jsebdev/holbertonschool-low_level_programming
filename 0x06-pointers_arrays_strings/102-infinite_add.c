#include "holberton.h"



/**
 * lenstring - gives lenght of a string
 * @s: string to measure
 * Return: lenght of a string
 */
int lenstring(char *s)
{
	int i = 0;

	for (i = 0; *(s + i); i++)
	{}
	return (i);
}


/**
 * revstrn - reverse string
 * @a: string to reverse
 * Return: nothing
 */
void *revstrn(char *a)
{
	int i = 0, n = 0;
	char aux;

	n = lenstring(a);
	for (i = 0; i < n / 2; i++)
	{
		aux = *(a + i);
		*(a + i) = *(a + n - 1 - i);
		*(a + n - 1 - i) = aux;
	}
}

/**
 * infinite_add - add two string numbers
 * @n1: first number
 * @n2: second number
 * @r: output buffer
 * @size_r: size of r
 * Return: returns addition of the 2 numbers or 0 if buffer is too small
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int ln1, ln2, maxln, i, d1, d2, sum, rem = 0;

	ln1 = lenstring(n1);
	ln2 = lenstring(n2);
	maxln = (ln1 > ln2) ? ln1 : ln2;

	for (i = 0; i < maxln && size_r - 1 >= maxln; i++)
	{
		d1 = (i < ln1) ? *(n1 + ln1 - 1 - i) - '0' : 0;
		d2 = (i < ln2) ? *(n2 + ln2 - 1 - i) - '0' : 0;
		sum = d1 + d2 + rem;
		*(r + i) = sum % 10 + '0';
		rem = sum / 10;
	}
	if (size_r - 1 < maxln)
		r = 0;
	else if (rem != 0)
	{
		if (maxln >= size_r - 1)
		{
			r = 0;
		}
		else
		{
			*(r + maxln) = rem + '0';
			*(r + maxln + 1) = 0;
			revstrn(r);
		}
	}
	else
	{
		*(r + maxln) = 0;
		revstrn(r);
	}
	/* printf("n1 = %s\n", n1); */
	/* printf("n2 = %s\n", n2); */
	/* printf("r = %s\n", r); */
	return (r);
}
