#include "dog.h"

/**
 * init_dog - initialize a dog
 * @d: the dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	int nl = 0, ol = 0, i = 0;

	printf("hay que poner %s\n", name);
	if (d != NULL)
	{
		while (*(name + nl))
			nl++;
		d->name = malloc(sizeof(char) * nl);
		if (d->name != NULL)
		{
			for (i = 0; name[i] != 0; i++)
				d->name[i] = name[i];
		}
		d->name[i] = 0;

		printf("Escribimos %s\n", d->name);
		d->age = age;
		while (*(owner + ol))
			ol++;
		d->name = malloc(sizeof(char) * ol);
		if (d->owner != NULL)
		{
			for (i = 0; owner[i] != 0; i++)
				d->owner[i] = owner[i];
		}
		d->owner[i] = 0;
	}
}
