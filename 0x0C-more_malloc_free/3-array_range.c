#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum integer value in array
 * @max: maximum integer value in array
 * Return: returns pointer to the resulting array of integes
 */

int *array_range(int min, int max)
{
	int count = 0;
	int size;
	int *ptr;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = (int *)malloc(size * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	while (count < size)
	{
		ptr[count] = min;
		min++;
		count++;
	}
	return (ptr);
}
