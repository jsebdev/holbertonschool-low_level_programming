# include "holberton.h"

/**
 * _atoi - convert a string into an int
 * @s: string to convert
 * Return: string converted into an int
 */
int _atoi(char *s)
{
	int len = 0, sign_num = 1, i = 0, no_num_yet = 0, res = 0, newdigit;

	for (; *(s + len) != 0; len++)
	{
		/*
		 *We take into account any - symbol before it appears the first
		 *number
		 */
		if (*(s + len) == '-' && no_num_yet == 0)
			sign_num = -sign_num;
		/*
		 *If something different than a number appears
		 * after the first number appears, we break the for
		 */
		if (no_num_yet == 1 &&  !(*(s + len) >= '0' && *(s + len) <= '9'))
			break;
		/*Take all the numbers into a new char[]*/
		if (*(s + len) >= '0' && *(s + len) <= '9')
		{
			newdigit = *(s + len) - '0';
			if (sign_num > 0)
				res = res * 10 + newdigit;
			else
				res = res * 10 - newdigit;
			i++;
			no_num_yet = 1;
		}
	}
	return (res);
}
