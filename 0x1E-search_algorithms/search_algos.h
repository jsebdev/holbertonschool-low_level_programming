#ifndef search_algos_h
#define search_algos_h

#include <stdio.h>
#include <stdlib.h>


int linear_search(int *array, size_t size, int value);

int binary_search(int *array, size_t size, int value);
int bin_search_recursive(int *array, size_t size, size_t initial_index,
		int value);
void print_array(int *array, size_t size);

#endif
