#include "holberton.h"pppp

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
void revstrn(char *a)
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
char *infinite_add(char *n1, char *n2, char *r, int *size_r)
{
	int ln1, ln2, maxln, i, d1, d2, sum, rem = 0;

	ln1 = lenstring(n1);
	ln2 = lenstring(n2);
	maxln = (ln1 > ln2) ? ln1 : ln2;
	r = _realloc(r, *size_r, maxln + 2);
	if (r == NULL)
		return (NULL);
	*size_r = maxln + 2;
	for (i = 0; i < maxln; i++)
	{
		d1 = (i < ln1) ? *(n1 + ln1 - 1 - i) - '0' : 0;
		d2 = (i < ln2) ? *(n2 + ln2 - 1 - i) - '0' : 0;
		sum = d1 + d2 + rem;
		*(r + i) = sum % 10 + '0';
		rem = sum / 10;
	}
	if (rem != 0)
	{
		*(r + maxln) = rem + '0';
		*(r + maxln + 1) = 0;
	}
	else
	{
		*(r + maxln) = 0;
	}
	revstrn(r);
	return (r);
}

/**
 * switch_pointers - switch pointers and lenghts of pointers
 * @p0: pointer 0
 * @p1: pointer 1
 * @l0: lenght 0
 * @l1: lenght 1
 * Return: nothing
 */
void switch_pointers(char **p0, char **p1, int *l0, int *l1)
{
	char *temp_ptr;
	int temp_len;

	temp_ptr = *p0;
	*p0 = *p1;
	*p1 = temp_ptr;

	temp_len = *l0;
	*l0 = *l1;
	*l1 = temp_len;
}

/**
 * main - multiply and print two numbers
 * @argc: number of arguments
 * @argv: vector of arguments
 * Return: always cero
 */
int main(int argc, char **argv)
{
	int len1, len2, i;
	int *facts_size = malloc(sizeof(int) * 3);
	char **facts = malloc(sizeof(int *) * 3);

	if (argc != 3)
	{
		printf("Error\n");
		free(facts_size);
		free(facts);
		return (98);
	}
	len1 = lenstring(argv[1]);
	len2 = lenstring(argv[2]);
	if ((len1 == 1 && argv[1][0] == '0')
	    || (len2 == 1 && argv[2][0] == '0'))
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 3; i++)
	{
		*(facts_size + i) = 1;
		*(facts + i) = malloc(sizeof(char) * facts_size[i]);
	}
	for (i = 0; i < len2; i++)
	{
		*(facts + 0) = mul_digit(argv[1], len1, argv[2][len2 - i - 1],
					 facts[0], facts_size + 0);
		*(facts + 0) = add_0s(facts[0], facts_size + 0, i);
		facts[2] = infinite_add(facts[0], facts[1], facts[2],
					facts_size + 2);
		switch_pointers(facts + 1, facts + 2, &facts_size[1],
				&facts_size[2]);
	}
	printf("%s\n", facts[1]);
	for (i = 0; i < 2; i++)
		free(*(facts + i));
	free(facts);
	free(facts_size);
	return (0);
}

/**
 * add_0s - adds c ceros to end of string
 * @num: string
 * @len: lenght of string
 * @c: number os ceros to add
 * Return: pointer to string with ceros
 */
char *add_0s(char *num, int *len, int c)
{
	char *ceros = malloc(sizeof(char) * c + 1);
	int i = 0;
	char *res;

	for (i = 0; i <  c; i++)
	{
		*(ceros + i) = '0';
	}
	*(ceros + i) = 0;
	num = _realloc(num, *len, *len + c);
	if (num == NULL)
	{
		return (NULL);
	}
	*len = *len + c;

	res = string_nconcat(num, ceros, c);
	free(num);
	free(ceros);
	return (res);
}


/**
 * mul_digit - multiply number for a digit
 * @num: number
 * @len: number's lenght
 * @d: digit
 * @res: buffer to store result
 * @size_res: size of buffer
 * Return: pointer to result
 */
char *mul_digit(char *num, int len, char d, char *res, int *size_res)
{
	int i = 0, carry = 0, mul;

	res = _realloc(res, *size_res, len + 1);
	if (res == NULL)
	{
		return (NULL);
	}

	*size_res = len + 1;

	for (i = 0; i < len; i++)
	{
		mul = (num[len - i - 1] - '0') * (d - '0') + carry;
		*(res + i) = (mul % 10) + '0';
		carry = mul / 10;
	}
	if (carry)
	{
		*(res + i) = carry + '0';
		*(res + i + 1) = 0;
	}
	else
	{
		*(res + i) = 0;
	}
	revstrn(res);
	return (res);
}
