#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index -> searches an array to find an ihteger match
 * @array: array to search
 * @size: size of array
 * @cmp: function that performs the search initially
 * Return: Returns index of position of integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size == 0)
		return (-1);
	while (index < size)
	{
		if (cmp(array[index]) == 1)
		{
			return (index);
		}
		index++;
	}
	return (-1);
}
