#include <stdio.h>


int checkpalindrome(int a)
{
	int rev = 0;

	while (a > 0)
	{
		rev = rev * 10 + (a % 10);
		if (rev == 0)
			return (0);
		if (a == rev)
			return (1);
		a = a / 10;
		if (a == rev)
			return (1);
	}
	return (0);
}

int main(void)
{
	int a, b, pal, x, y;

	//printf("%d\n", checkpalindrome(90));

	for (a = 999; a > 0; a--)
	{
		for (b = 999; b > 0; b--)
		{
			if (checkpalindrome(a * b))
			{
				if (a * b > pal)
					pal = a * b, x = a, y = b;
			}
		}
	}
	printf("%d", pal);
	return (0);
}
