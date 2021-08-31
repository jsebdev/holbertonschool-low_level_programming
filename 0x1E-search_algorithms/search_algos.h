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
int advanced_binary(int *array, size_t size, int value);


/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

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
