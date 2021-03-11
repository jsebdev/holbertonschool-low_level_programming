#include "variadic_functions.h"

/**
 * print_numbers - print a serie of numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: quantity of numbers to print
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(list, int));
			if (i != n - 1)
				printf("%s", separator);
		}
		if (n > 0)
			printf("\n");
	}
	va_end(list);
}
