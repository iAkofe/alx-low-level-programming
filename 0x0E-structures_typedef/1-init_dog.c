#include "dog.h"
#define NULL 0

/**
 * init_dog -> function that initializes the dog structure
 * @d: pointer declaration of dog data type
 * @name: name of dog
 * @age: age of dog
 * @owner: dog's owner name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
