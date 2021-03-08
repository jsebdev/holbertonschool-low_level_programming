#ifndef holbiesforlife

#define holbiesforlife

#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

int lenstring(char *s);
void revstrn(char *a);
char *infinite_add(char *n1, char *n2, char *r, int *size_r);
char *mul_digit(char *num, int len, char d, char *res, int *size_res);
char *add_0s(char *num, int *len, int c);
void switch_pointers(char **p0, char **p1, int *l0, int *l1);

#endif
