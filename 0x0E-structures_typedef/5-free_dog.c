#include "dog.h"

/**
 * new_dog - free memory for dog
 * @d: dog
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
