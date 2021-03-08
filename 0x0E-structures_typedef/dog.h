#ifndef theDog

#define theDog

#include <stdio.h>

/**
 * struct dog - it's a dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void print_dog(struct dog *d);

#endif
