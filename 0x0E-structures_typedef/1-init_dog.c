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
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

#if 0
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	int nl = 0, ol = 0, i = 0;

	if (d != NULL)
	{
		while (*(name + nl))
			nl++;
		d->name = malloc(sizeof(char) * (nl + 1));
		if (d->name != NULL)
		{
			for (i = 0; name[i] != 0; i++)
				d->name[i] = name[i];
		}
		d->name[i] = 0;
		d->age = age;
		while (*(owner + ol))
			ol++;
		d->owner = malloc(sizeof(char) * (ol + 1));
		if (d->owner != NULL)
		{
			for (i = 0; owner[i] != 0; i++)
				d->owner[i] = owner[i];
		}
		d->owner[i] = 0;
	}
}
#endif
