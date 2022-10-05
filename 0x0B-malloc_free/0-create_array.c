#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of characters
 * and initializes it with a specific character
 * @size: size of array
 * @c: specific character to fill array with
 * Return: returns pointer to array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;

	char *ptr;

	ptr = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
