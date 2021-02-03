#include <stdio.h>

/**
 * main - funciont is the funcion the program start's running
 * Return: the function always returns 0
 **/
int main(void)
{
    int i = 0;
    char c;
    long int li;
    long long int lli;
    float f;

    printf("Size of a char: %ld byte(s)\n", sizeof(char));
    printf("Size of an int: %ld byte(s)\n", sizeof(int));
    printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
    printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
    printf("Size of a float: %ld byte(s)\n", sizeof(float));
    return (0);
}
