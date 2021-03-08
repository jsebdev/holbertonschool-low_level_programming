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
	dog_t *the_Dog;

	the_Dog = malloc(sizeof(dog_t *));
	if (the_Dog != NULL)
	{
		the_Dog->name = name;
		the_Dog->age = age;
		the_Dog->owner = owner;
	}
	return (the_Dog);
}
