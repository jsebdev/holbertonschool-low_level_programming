#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "holberton");
	hash_table_set(ht, "hetairas", "h1");
	hash_table_set(ht, "mentioner", "m1");
	hash_table_set(ht, "betty", "Juana");
	hash_table_set(ht, "hetairas", "het2");
	hash_table_set(ht, "mentioner", "men2");
	hash_table_set(ht, "neurospora", "n1");
	hash_table_set(ht, "dram", "");
	hash_table_set(ht, "vivency", "");
	hash_table_set(ht, "dram", "nuevo dram! jojo");
	hash_table_set(ht, "neurospora", "neu2");
	hash_table_set(ht, "heliotropes", "hel2");
	hash_table_set(ht, "", "hola");
	return (EXIT_SUCCESS);
}
