#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog -> function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog's owner name
 * Return: return pointer to new dog
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	int a, b, c;
	dog_t *dogs;
	
	if (name == NULL || owner == NULL)
		return (NULL);
	dogs  = malloc(sizeof(dog_t));
	if (dogs == NULL)
	{
		return (NULL);
	}
	a = 0;
	while (name[a])
		a++;
	a++;
	dogs->name = malloc(a * sizeof(char));
	if (dogs->name == NULL)
	{
		free(dogs);
		return (NULL);
	}
	c = 0;
	while (c < a)
	{
		dogs->name[c] = name[c];
		c++;
	}
	dogs->age = age;
	b = 0;
	while (owner[b])
		b++;
	b++;
	dogs->owner = malloc(b * sizeof(char));
	if (dogs->owner == NULL)
	{
		free(dogs->name);
		free(dogs);
		return (NULL);
	}
	c = 0;
	while (c < b)
		dogs->owner[c] = owner[c];
	return (dogs);
}
