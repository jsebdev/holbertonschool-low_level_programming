#include "3-calc.h"

/**
 * op_add - adition of two numbers
 * @a: first number
 * @b: second number
 * Return: addtition of the two arguments
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;
}
