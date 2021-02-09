#include <stdio.h>
#include <string.h>
int main(void)
{
	int i = 3;
	unsigned long int num = 2, num1 = 1, aux;

	printf("1, 2, ");
	while (i <= 98)
	{
		aux = num;
		num = num + num1;
		num1 = aux;
		printf("%d %lu\n", i + 1, num);
		if (i != 50)
			printf(", ");
		i++;
	}
	printf("\n");
	return (0);
}
