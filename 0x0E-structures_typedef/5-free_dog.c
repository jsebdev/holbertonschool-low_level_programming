#include "dog.h"

/**
 * free_dog - free memory for dog
 * @d: dog
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}