#include "dog.h"

/**
 * init_dog - initialize a dog
 * @d: the dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: nothing
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *the_Dog;

	the_Dog = malloc(sizeof(dog_t *));
	the_Dog->name = name;
	the_Dog->age = age;
	the_Dog->owner = owner;

	return (the_Dog);
}
