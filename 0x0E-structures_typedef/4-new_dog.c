#include "dog.h"

/**
 * new_dog - creates a dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int nl = 0, ol = 0, i = 0;
	dog_t *the_Dog;

	the_Dog = malloc(sizeof(dog_t));
	if (the_Dog != NULL)
	{
		while (*(name + nl))
			nl++;
		the_Dog->name = malloc(sizeof(char) * (nl + 1));
		if (the_Dog->name != NULL)
		{
			for (i = 0; name[i] != 0; i++)
				the_Dog->name[i] = name[i];
			the_Dog->name[i] = 0;
		}
		else
		{
			free(the_Dog);
			return (NULL);
		}
		the_Dog->age = age;
		while (*(owner + ol))
			ol++;
		the_Dog->owner = malloc(sizeof(char) * (ol + 1));
		if (the_Dog->owner != NULL)
		{
			for (i = 0; owner[i] != 0; i++)
				the_Dog->owner[i] = owner[i];
			the_Dog->owner[i] = 0;
		}
		else
		{
			free(the_Dog->name);
			free(the_Dog);
			return (NULL);
		}
	}
	return (the_Dog);
}
