#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each member element
 * Return: return pointer to resulting array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int count;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
	filler = mem;
	count = 0;
	while (count < nmemb * size)
	{
		filler[count] = '\0';
		count++;
	}
	return (mem);
}
