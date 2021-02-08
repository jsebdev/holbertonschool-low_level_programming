#include <stdio.h>
#include <string.h>
int main(void)
{
	int i = 0;
	long int num = 2, num1 = 1, aux;

	printf("1, 2, ");
	while (i < 50)
	{
		aux = num;
		num = num + num1;
		num1 = aux;
		i++;
		printf("%ld", num);
		if (i != 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}
