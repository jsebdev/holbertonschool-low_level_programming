#ifndef search_algos_h
#define search_algos_h

#include <stdio.h>
#include <stdlib.h>


int linear_search(int *array, size_t size, int value);

int binary_search(int *array, size_t size, int value);
int bin_search_recursive(int *array, size_t size, size_t initial_index,
		int value);
void print_array(int *array, size_t size);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int interpolation_search_recursive(int *array, size_t size, int value,
		int initial_index);
int exponential_search(int *array, size_t size, int value);
int expo_binary_search(int *array, size_t size, int value);

#define print_array(ARRAY, SIZE)\
	do { \
		unsigned int i = 0;\
		while (i < (SIZE))\
		{\
			printf("%i", (ARRAY)[i]);\
			i++;\
			if (i != (SIZE))\
			{\
				printf(", ");\
			} \
		} \
		printf("\n");\
	} while (0)

#endif
