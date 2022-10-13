#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator -> executes function on array argument
 * @array: array to work on
 * @size: size of array
 * @action: function to execute on array
 * Retrun: return nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index = 0;

	if (array == NULL || action == NULL)
		return;
	while (index < size)
	{
		action(array[index]);
		index++;
	}
}
