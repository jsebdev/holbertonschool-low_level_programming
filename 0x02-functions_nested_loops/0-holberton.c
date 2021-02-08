#include "holberton.h"

/**
 * Main - main fuction
 * @parameterx: No parameters
(* a blank line
 * Description: Main fuction
(* section header: stdio.h
 * Return: always return zero
 */
int main(void)
{
	char palabra[] = "Holberton";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(*(palabra + i));
	}
	_putchar('\n');
	return (0);
}
