#include "3-calc.h"

/**
 * op_add - adition of two numbers
 * @a: first number
 * @b: second number
 * Return: addtition of the two arguments
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substraction of two numbers
 * @a: first number
 * @b: second number
 * Return: substraction of the two arguments
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication of two numbers
 * @a: first number
 * @b: second number
 * Return: multiplication of the two arguments
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of two numbers
 * @a: first number
 * @b: second number
 * Return: division of the two arguments
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}


/**
 * op_mod - module of two numbers
 * @a: first number
 * @b: second number
 * Return: module of the two arguments
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
