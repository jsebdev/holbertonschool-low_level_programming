#include "variadic_functions.h"

/**
 * findc - finds a char in list and prints it
 * @list: list
 * Return: nothing
 */
void findc(va_list *list)
{
	char c;

	c = va_arg(*list, int);
	printf("%c", c);
}
/**
 * findi - finds an int in list and prints it
 * @list: list
 * Return: nothing
 */
void findi(va_list *list)
{
	int i;

	i = va_arg(*list, int);
	printf("%d", i);
}
/**
 * findf - finds a float in list and prints it
 * @list: list
 * Return: nothing
 */
void findf(va_list *list)
{
	float f;

	f = va_arg(*list, double);
	printf("%f", f);
}
/**
 * finds - finds a char* in list and prints it
 * @list: list
 * Return: nothing
 */
void finds(va_list *list)
{
	char *s;

	s = va_arg(*list, char*);
	printf("%s", s);
}

/**
 * print_all - prints a serie of arguments with type inside the format
 * @format: string with the formats to print
 * c: char
 * i: integer
 * f: float
 * s: char *
 * any other char is ignored
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j = 0, sl;
	va_list list;
	char *types = "cifs";

	void (*fun[])(va_list *) = {findc, findi, findf, finds};

	va_start(list, format);
	sl = strlen(format);
	while (format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == types[j])
			{
				fun[j](&list);
				if (i != sl - 1)
					printf(", ");
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
